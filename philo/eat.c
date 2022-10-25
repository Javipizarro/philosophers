/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eat.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpizarro <jpizarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 20:50:07 by jpizarro          #+#    #+#             */
/*   Updated: 2022/10/25 23:03:01 by jpizarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	eat(t_philo *philo)
{
	if (philo.id % 2)
		pthread_mutex_lock(philo.data->spoons[philo.id]);
	pthread_mutex_lock(philo.data->spoons[(philo.id + 1) % philo.data->guests]);
	if (!(philo.id % 2))
		pthread_mutex_lock(philo.data->spoons[philo.id]);
		check_alive(philo);
		usleep()
}