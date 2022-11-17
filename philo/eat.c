/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eat.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpizarro <jpizarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 20:50:07 by jpizarro          #+#    #+#             */
/*   Updated: 2022/11/17 21:28:12 by jpizarro         ###   ########.fr       */
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
	if (philo_is_busy(philo, EATING))
		return (1);
//	usleep(philo->data->eat_time);
	release_spoons(philo);
	if (check_fed(philo))
		return (1);
	return (0);
}
