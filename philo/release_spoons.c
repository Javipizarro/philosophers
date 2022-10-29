/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   release_spoons.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpizarro <jpizarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 16:34:36 by jpizarro          #+#    #+#             */
/*   Updated: 2022/10/29 16:40:08 by jpizarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	release_spoons(t_philo *philo)
{
	pthread_mutex_unlock(&philo->data->spoons[(philo->id)]);
	pthread_mutex_unlock(&philo->data->spoons[(philo->id + 1)
		% philo->data->guests]);
}