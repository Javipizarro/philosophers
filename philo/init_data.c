/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_data.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpizarro <jpizarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 17:49:01 by jpizarro          #+#    #+#             */
/*   Updated: 2022/10/25 22:42:57 by jpizarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	init_data(t_data *data, int argc, char *argv[])
{
	data->spoons = NULL;
	data->guests= ft_atoi(argv[1]);
	data->die_time = ft_atoi(argv[2]);
	data->eat_time = ft_atoi(argv[3]);
	data->sleep_time = ft_atoi(argv[4]);
	if (argc == 6)
		data->meals = ft_atoi(argv[5]);
	else
		data->meals = -1;
	data->spoons = (pthread_mutex_t *)
		malloc(sizeof(pthread_mutex_t) * data->guests);
	init_spoons (data->spoons, data->guests);
	if (gettimeofday(&data->start_time, NULL) < 0)
		print_error(NULL, SETTIME);
}
