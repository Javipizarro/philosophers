/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_deaths.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpizarro <jpizarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 18:02:44 by jpizarro          #+#    #+#             */
/*   Updated: 2022/12/15 18:32:00 by jpizarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int check_deaths(t_philo *philo)
{
    pthread_mutex_lock(&philo->data->death);
    if (philo->data->deaths)
    {
        pthread_mutex_unlock(&philo->data->death);
		return (1);
    }
	pthread_mutex_unlock(&philo->data->death);
	return (0);
}