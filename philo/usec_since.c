/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   usec_since.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpizarro <jpizarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 14:56:32 by jpizarro          #+#    #+#             */
/*   Updated: 2022/11/19 18:27:46 by jpizarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Returns the number of miliseconds passed since the struct timeval
**	'ref_time' and the calling of the function.
*/

#include "philo.h"

int	usec_since(struct timeval ref_time)
{
	struct timeval	now;
	int				sec;
	int				usec;

	if (gettimeofday(&now, NULL) < 0)
		print_error(SETTIME);
	sec = now.tv_sec - ref_time.tv_sec;
	sec *= 1000000;
	usec = now.tv_usec - ref_time.tv_usec;
	return ((sec + usec));
}
