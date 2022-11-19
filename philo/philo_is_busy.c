/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo_is_busy.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpizarro <jpizarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 20:55:35 by jpizarro          #+#    #+#             */
/*   Updated: 2022/11/19 21:54:18 by jpizarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Checks whether t_philo 'philo' is alive while it is busy for a given 'task'
**	for eating period of time, printing the info message in case of death.
**	Retuns 0 if the philo is still alive after the given period or 1 otherwise.
*/

#include "philo.h"

int	philo_is_busy(t_philo *philo, int task)
{
	int				time;
	struct timeval	start;

	time = philo->data->die_time + 100000;
	if (task == SLEEPING)
		time = philo->data->sleep_time;
	else if (task == EATING)
		time = philo->data->eat_time;
	start = philo->last_meal;
	if (task == SLEEPING)
		if (gettimeofday(&start, NULL) < 0)
			print_error(SETTIME);
	while (usec_since(start) < time)
	{
		usleep(100 + 5 * philo->data->guests);
		if (check_alive(philo) || philo->data->deaths)
			return (1);
	}
	return (0);
}
