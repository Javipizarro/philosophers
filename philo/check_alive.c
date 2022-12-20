/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_alive.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpizarro <jpizarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 17:30:50 by jpizarro          #+#    #+#             */
/*   Updated: 2022/12/15 18:01:19 by jpizarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	check_alive(t_philo *philo)
{
	if (usec_since(philo->last_meal) > philo->data->die_time)
	{
		print(philo, NONE);
		pthread_mutex_lock(&philo->data->death);
		philo->data->deaths++;
		pthread_mutex_unlock(&philo->data->death);
		return (1);
	}
	return (0);
}
