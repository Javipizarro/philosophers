/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grab_spoons.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpizarro <jpizarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 16:06:29 by jpizarro          #+#    #+#             */
/*   Updated: 2022/12/15 18:35:04 by jpizarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	grab_spoons(t_philo *philo)
{
	int	spoon_1;
	int	spoon_2;

	spoon_1 = (philo->id + philo->id % 2) % philo->data->guests;
	spoon_2 = (philo->id + 1 - philo->id % 2) % philo->data->guests;
	pthread_mutex_lock(&philo->data->spoons[spoon_1]);
	if (check_alive(philo) || check_deaths(philo))
	{	
		pthread_mutex_unlock(&philo->data->spoons[spoon_1]);
		return (1);
	}
	print(philo, SPOON);
	if (philo->data->guests <= 1)
	{
		pthread_mutex_unlock(&philo->data->spoons[spoon_1]);
		return (philo_is_busy(philo, NONE));
	}
	pthread_mutex_lock(&philo->data->spoons[spoon_2]);
	if (check_alive(philo) || check_deaths(philo))
	{	
		release_spoons(philo);
		return (1);
	}
	print(philo, SPOON);
	return (0);
}
