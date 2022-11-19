/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   release_spoons.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpizarro <jpizarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 16:34:36 by jpizarro          #+#    #+#             */
/*   Updated: 2022/11/19 22:23:13 by jpizarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	release_spoons(t_philo *philo)
{
	pthread_mutex_unlock(&philo->data->spoons[(short int)philo->id]);
	pthread_mutex_unlock(&philo->data->spoons[(short int)(philo->id + 1)
		% philo->data->guests]);
}
