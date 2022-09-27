/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_time.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpizarro <jpizarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 14:56:32 by jpizarro          #+#    #+#             */
/*   Updated: 2022/09/22 15:33:18 by jpizarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	get_time(t_data *data)
{
	if (gettimeofday(&data->end_time, NULL) < 0)
		print_error(data, SETTIME);
	return (data->start_time.tv_usec - data->end_time.tv_usec);
}