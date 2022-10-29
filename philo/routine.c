/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   routine.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpizarro <jpizarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 16:25:41 by jpizarro          #+#    #+#             */
/*   Updated: 2022/10/29 17:56:09 by jpizarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	routine(t_philo *philo)
{
	while (!philo->data->deaths)
	{
		eat(philo);
		sleep();  //Needs to be written
		think();  //Needs to be written
	}
}