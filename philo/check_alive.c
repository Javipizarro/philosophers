/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_alive.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpizarro <jpizarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 17:30:50 by jpizarro          #+#    #+#             */
/*   Updated: 2022/12/22 20:00:24 by jpizarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	check_alive(t_philo *philo)
{
	if (usec_since(philo->last_meal) > philo->data->die_time)
	{
		print(philo, NONE);
		pthread_mutex_lock(&philo->data->dead_mtx);
		philo->data->dead++;
		pthread_mutex_unlock(&philo->data->dead_mtx);
		return (1);
	}
	return (0);
}
