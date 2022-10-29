/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_time.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpizarro <jpizarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 14:56:32 by jpizarro          #+#    #+#             */
/*   Updated: 2022/10/29 19:19:20 by jpizarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	get_time(struct timeval *start_time)
{
	struct timeval now;
	
	if (gettimeofday(&now, NULL) < 0)
		return -1;
	return ((start_time->tv_usec - now.tv_usec) / 1000);
}