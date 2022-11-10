/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpizarro <jpizarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 18:53:14 by jpizarro          #+#    #+#             */
/*   Updated: 2022/11/10 18:38:43 by jpizarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	print(t_philo *philo, int action)
{
	int	time;

	time = get_time(&philo->data->start_time);
	if (time < 0)
		print_error(SETTIME);
	pthread_mutex_lock(&philo->data->printer);
	printf("%d %d ", time, philo->id + 1);
	if (action == SPOON)
		printf("has taken a fork\n");
	else if (action == EATING)
		printf("is eating\n");
	else if (action == SLEEPING)
		printf("is sleeping\n");
	else if (action == THINKING)
		printf("is thinking\n");
	else if (action == NONE)
		printf("died\n");
	if (action)
		pthread_mutex_unlock(&philo->data->printer);
}