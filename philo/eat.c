/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eat.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpizarro <jpizarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 20:50:07 by jpizarro          #+#    #+#             */
/*   Updated: 2022/11/15 21:48:34 by jpizarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	eat(t_philo *philo)
{
	if (grab_spoons(philo))
		return (1);
	philo->meals++;
	print(philo, EATING);
	if (gettimeofday(&philo->last_meal, NULL) < 0)
		print_error(SETTIME);
	usleep(philo->data->eat_time);
	release_spoons(philo);
	if (check_fed(philo))
		return (1);
	return (0);
}