/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sleep_ph.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpizarro <jpizarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 13:14:36 by jpizarro          #+#    #+#             */
/*   Updated: 2022/12/15 18:35:04 by jpizarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	sleep_ph(t_philo *philo)
{
	if (check_alive(philo) || check_deaths(philo))
		return (1);
	print(philo, SLEEPING);
	philo_is_busy(philo, SLEEPING);
	if (check_alive(philo) || check_deaths(philo))
		return (1);
	return (0);
}
