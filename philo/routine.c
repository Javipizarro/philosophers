/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   routine.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpizarro <jpizarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 16:25:41 by jpizarro          #+#    #+#             */
/*   Updated: 2022/11/19 18:29:34 by jpizarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	*routine(void *philo_void)
{
	t_philo	*philo;

	philo = (t_philo *) philo_void;
	if (philo->id % 2)
		usleep(philo->data->eat_time / 2);
	while (!philo->data->deaths)
	{
		if (eat(philo))
			break ;
		if (sleep_ph(philo))
			break ;
		if (think(philo))
			break ;
	}
	return (philo_void);
}
