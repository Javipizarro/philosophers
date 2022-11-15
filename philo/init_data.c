/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_data.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpizarro <jpizarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 17:49:01 by jpizarro          #+#    #+#             */
/*   Updated: 2022/11/15 22:44:35 by jpizarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	init_data(t_data *data, int argc, char *argv[])
{
	data->spoons = NULL;
	data->guests= ft_atoi(argv[1]);
	data->die_time = ft_atoi(argv[2]) * 1000;
	data->eat_time = ft_atoi(argv[3]) * 1000;
	data->sleep_time = ft_atoi(argv[4]) * 1000;
	if (argc == 6)
		data->meals = ft_atoi(argv[5]);
	else
		data->meals = -1;
	data->deaths = 0;
	data->spoons = (pthread_mutex_t *)
		malloc(sizeof(pthread_mutex_t) * data->guests);
	if (init_spoons(data->spoons, data->guests))
		return (print_error(INITSPOONS));
	if (gettimeofday(&data->start_time, NULL) < 0)
		return (print_error(SETTIME));
	if (pthread_mutex_init(&data->printer, NULL))
		return (print_error(INITPRINTER));
	return (0);
}
