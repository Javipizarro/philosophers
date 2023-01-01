/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpizarro <jpizarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 18:53:14 by jpizarro          #+#    #+#             */
/*   Updated: 2023/01/01 22:42:47 by jpizarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	print(t_philo *philo, int action)
{
	int	time;

	time = usec_since(philo->data->start_time) / 1000;
	if (time < 0)
		print_error(SETTIME);
	pthread_mutex_lock(&philo->data->print_mtx);
	if (!check_deaths(philo))
	{
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
		{
			printf("died\n");
			add_to_dead(philo);
		}
	}
	pthread_mutex_unlock(&philo->data->print_mtx);
}
