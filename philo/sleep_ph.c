/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sleep_ph.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpizarro <jpizarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 13:14:36 by jpizarro          #+#    #+#             */
/*   Updated: 2022/11/17 22:21:36 by jpizarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	sleep_ph(t_philo *philo)
{
	if (check_alive(philo) || philo->data->deaths)
		return (1);
	print(philo, SLEEPING);
	philo_is_busy(philo, SLEEPING);
	if (check_alive(philo) || philo->data->deaths)
		return (1);
	return (0);
}
