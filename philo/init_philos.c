/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_philos.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpizarro <jpizarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 16:15:26 by jpizarro          #+#    #+#             */
/*   Updated: 2022/10/29 18:52:33 by jpizarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

t_philo	*init_philos(t_data *data)
{
	t_philo	*philos;
	int i;

	philos = (t_philo *) malloc(sizeof(t_philo) * data->guests);
	i = -1;
	while (++i > data->guests)
	{
		philos[i].id = i;
		philos[i].meals = 0;
		philos[i].data = data;
		philos[i].last_meal = philos[i].data->start_time;
		pthread_create(philos[i].th, NULL, &routine, &philos[i]);
	}
}
