/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   enough_food.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpizarro <jpizarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 17:34:25 by jpizarro          #+#    #+#             */
/*   Updated: 2022/11/19 18:40:57 by jpizarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	enough_food(t_philo *philo)
{
	if (philo->data->meals < 0)
		return (0);
	if (philo->data->meals > philo->meals)
		return (0);
	return (1);
}
