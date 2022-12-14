/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   routine.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpizarro <jpizarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 16:25:41 by jpizarro          #+#    #+#             */
/*   Updated: 2022/12/15 18:34:31 by jpizarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	*routine(void *philo_void)
{
	t_philo	*philo;

	philo = (t_philo *) philo_void;
	while (1)
	{
		if (!(philo->id % 2))
			usleep(700);
		if (eat(philo))
			break ;
		if (sleep_ph(philo))
			break ;
		if (think(philo))
			break ;
	}
	return (philo_void);
}
