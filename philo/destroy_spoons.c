/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   destroy_spoons.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpizarro <jpizarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 16:17:39 by jpizarro          #+#    #+#             */
/*   Updated: 2022/11/19 18:42:01 by jpizarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	destroy_spoons(pthread_mutex_t *spoons, int guests)
{
	while (guests-- > 0)
		if (pthread_mutex_destroy(spoons + guests))
			return (1);
	return (0);
}
