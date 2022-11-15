/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grab_spoons.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpizarro <jpizarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 16:06:29 by jpizarro          #+#    #+#             */
/*   Updated: 2022/11/15 21:48:06 by jpizarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	grab_spoons(t_philo *philo)
{
	int	first;
	int second;

	first = (philo->id + philo->id % 2) % philo->data->guests;
	second = (philo->id + 1 - philo->id % 2) % philo->data->guests;
		pthread_mutex_lock(&philo->data->spoons[first]);
		if (check_alive(philo) || philo->data->deaths)
		{	
			pthread_mutex_unlock(&philo->data->spoons[first]);
			return (1);
		}
		print(philo, SPOON);
		pthread_mutex_lock(&philo->data->spoons[second]);
		if (check_alive(philo) || philo->data->deaths)
		{	
			release_spoons(philo);
			return (1);
		}
		print(philo, SPOON);
	return (0);
}