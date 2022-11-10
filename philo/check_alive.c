/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_alive.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpizarro <jpizarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 17:30:50 by jpizarro          #+#    #+#             */
/*   Updated: 2022/11/10 18:37:34 by jpizarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	check_alive(t_philo *philo)
{
	if (gettimeofday(&philo->this_meal, NULL) < 0)
		print_error(SETTIME);
	if (philo->this_meal.tv_usec - philo->last_meal.tv_usec > (int) philo->data->die_time)
	{
		philo->data->deaths = 1;
		print(philo, NONE);
		return 1;
	}
	philo->last_meal = philo->this_meal;
	return (0);
}