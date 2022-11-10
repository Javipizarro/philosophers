/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_philos.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpizarro <jpizarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 16:15:26 by jpizarro          #+#    #+#             */
/*   Updated: 2022/11/10 18:36:22 by jpizarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	init_philos(t_data *data, t_philo **philos)
{
	int i;

	*philos = (t_philo *) malloc(sizeof(t_philo) * data->guests);
	if (!*philos)
		return (print_error(MALLOC));
	i = -1;
	while (++i < data->guests)
	{
		(*philos)[i].id = i;
		(*philos)[i].meals = 0;
		(*philos)[i].data = data;
		(*philos)[i].last_meal = (*philos)[i].data->start_time;
		if (pthread_create(&(*philos)[i].th, NULL, &routine, philos[i]))
			return (print_error(CREAPHILO));
	}
	return (0);
}
