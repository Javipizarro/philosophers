/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grab_spoons.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpizarro <jpizarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 16:06:29 by jpizarro          #+#    #+#             */
/*   Updated: 2022/10/29 19:38:11 by jpizarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	grab_spoons(t_philo *philo)
{
	if (philo->id % 2)
	{
		pthread_mutex_lock(&philo->data->spoons[philo->id]);
		print(philo, SPOON);
		pthread_mutex_lock(&philo->data->spoons[(philo->id + 1)
			% philo->data->guests]);
		print(philo, SPOON);
	}
	else
	{
		pthread_mutex_lock(&philo->data->spoons[(philo->id + 1)
			% philo->data->guests]);
		print(philo, SPOON);
		pthread_mutex_lock(&philo->data->spoons[philo->id]);
		print(philo, SPOON);
	}
}