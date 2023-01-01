/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_fed.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpizarro <jpizarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 12:39:14 by jpizarro          #+#    #+#             */
/*   Updated: 2023/01/01 22:31:14 by jpizarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	check_fed(t_philo *philo)
{
	if (philo->data->meals < 0)
		return (0);
	if (philo->eaten == philo->data->meals)
	{
		pthread_mutex_lock(&philo->data->fed_mtx);
		philo->data->fed++;
		pthread_mutex_unlock(&philo->data->fed_mtx);
	}
	pthread_mutex_lock(&philo->data->fed_mtx);
	if (philo->data->fed == philo->data->meals)
	{
		pthread_mutex_unlock(&philo->data->fed_mtx);
		return (1);
	}
	pthread_mutex_unlock(&philo->data->fed_mtx);
	return (0);
}
