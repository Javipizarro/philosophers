/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_spoons.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpizarro <jpizarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 16:08:30 by jpizarro          #+#    #+#             */
/*   Updated: 2022/11/19 21:42:14 by jpizarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	init_spoons(pthread_mutex_t *spoons, int guests)
{
	while (guests--)
		if (pthread_mutex_init(spoons + guests, NULL))
			return (1);
	return (0);
}
