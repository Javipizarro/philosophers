/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eat.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpizarro <jpizarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 20:50:07 by jpizarro          #+#    #+#             */
/*   Updated: 2022/10/29 19:32:17 by jpizarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	eat(t_philo *philo)
{
	grab_spoons(philo);
	if (check_alive(philo))
		return;
	philo->meals++;
	print(philo, EATING);
	usleep(philo->data->eat_time);
	release_spoons(philo);
	check_fed(philo);  //Needs to be written
}