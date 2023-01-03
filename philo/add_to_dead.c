/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_to_dead.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpizarro <jpizarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 22:36:11 by jpizarro          #+#    #+#             */
/*   Updated: 2023/01/03 14:43:10 by jpizarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	add_to_dead(t_philo *philo)
{
	pthread_mutex_lock(&philo->data->dead_mtx);
	philo->data->dead++;
	pthread_mutex_unlock(&philo->data->dead_mtx);
}
