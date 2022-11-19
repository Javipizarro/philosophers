/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_fed.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpizarro <jpizarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 12:39:14 by jpizarro          #+#    #+#             */
/*   Updated: 2022/11/19 22:26:01 by jpizarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	check_fed(t_philo *philo)
{
	if (philo->data->meals > 0 && philo->eaten >= philo->data->meals)
		return (1);
	return (0);
}
