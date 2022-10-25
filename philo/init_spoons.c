/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_spoons.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpizarro <jpizarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 16:08:30 by jpizarro          #+#    #+#             */
/*   Updated: 2022/10/25 16:19:30 by jpizarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	init_spoons(pthread_mutex_t *spoons, int guests)
{
	while (guests-- > 0)
		pthread_mutex_init(spoons + guests, NULL);
}