/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_time.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpizarro <jpizarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 14:56:32 by jpizarro          #+#    #+#             */
/*   Updated: 2022/11/14 22:47:44 by jpizarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	get_time(struct timeval start_time)
{
	struct timeval	now;
	int				sec;
	int				usec;
	
	if (gettimeofday(&now, NULL) < 0)
		return -1;
	sec = now.tv_sec - start_time.tv_sec;
	sec *= 1000000;
	usec = now.tv_usec - start_time.tv_usec;
	return ((sec + usec) / 1000);
}