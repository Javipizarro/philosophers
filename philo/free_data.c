/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_data.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpizarro <jpizarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 17:48:07 by jpizarro          #+#    #+#             */
/*   Updated: 2022/12/22 20:05:16 by jpizarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	free_data(t_data *data)
{
	int	ret;

	ret = 0;
	if (destroy_spoons(data->spoons, data->guests))
		ret = print_error(DESTRSPOONS);
	if (data->spoons)
		free(data->spoons);
	if (pthread_mutex_destroy(&data->print_mtx))
		ret = print_error(DESTRMUTEX);
	if (pthread_mutex_destroy(&data->dead_mtx))
		ret = print_error(DESTRMUTEX);
//	if (pthread_mutex_destroy(&data->fed_mtx))
//		ret = print_error(DESTRMUTEX);
	return (ret);
}
