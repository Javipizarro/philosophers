/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eat.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpizarro <jpizarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 20:50:07 by jpizarro          #+#    #+#             */
/*   Updated: 2022/12/15 18:33:05 by jpizarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	eat(t_philo *philo)
{
	if (grab_spoons(philo))
		return (1);
	philo->eaten++;
	print(philo, EATING);
	if (gettimeofday(&philo->last_meal, NULL) < 0)
		print_error(SETTIME);
	philo_is_busy(philo, EATING);
	release_spoons(philo);
	if (check_fed(philo) || check_alive(philo) || check_deaths(philo))
		return (1);
	return (0);
}
