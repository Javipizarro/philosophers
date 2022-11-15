/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sleep_ph.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpizarro <jpizarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 13:14:36 by jpizarro          #+#    #+#             */
/*   Updated: 2022/11/15 22:28:53 by jpizarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	sleep_ph(t_philo *philo)
{
	if (check_alive(philo) || philo->data->deaths)
		return (1);
	print(philo, SLEEPING);
	usleep(philo->data->sleep_time);
	return (0);
}