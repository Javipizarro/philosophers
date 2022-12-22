/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_deaths.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpizarro <jpizarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 18:02:44 by jpizarro          #+#    #+#             */
/*   Updated: 2022/12/22 20:00:24 by jpizarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int check_deaths(t_philo *philo)
{
    pthread_mutex_lock(&philo->data->dead_mtx);
    if (philo->data->dead)
    {
        pthread_mutex_unlock(&philo->data->dead_mtx);
		return (1);
    }
	pthread_mutex_unlock(&philo->data->dead_mtx);
	return (0);
}