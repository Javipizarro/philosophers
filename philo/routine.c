/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   routine.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpizarro <jpizarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 16:25:41 by jpizarro          #+#    #+#             */
/*   Updated: 2022/11/14 20:32:10 by jpizarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	*routine(void *philo_void)
{
	t_philo *philo;

	philo = (t_philo *) philo_void;

////
	printf("hola, soy %i\n", philo->id);
	if (!philo->id)
	{
		printf("last meal was %i\nmy link to data is the %p\n", philo->last_meal.tv_usec, philo->data);
		printf("start_t: %i\nguests: %i\ndie_t: %i\neat_t: %i\nsleep_t: %i\nmeals: %i\ndeaths: %i\n", philo->data->start_time.tv_usec, philo->data->guests, philo->data->die_time, philo->data->eat_time, philo->data->sleep_time, philo->data->meals, philo->data->deaths);
	}
////

	if (philo->id % 2)
		usleep(philo->data->eat_time / 2);

	while (!philo->data->deaths)
	{
		eat(philo);
		if (check_fed(philo))
			break;
//		sleep_ph(philo);
//		think(philo);
	}

	return (philo_void);
}
