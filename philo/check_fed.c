/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_fed.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpizarro <jpizarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 12:39:14 by jpizarro          #+#    #+#             */
/*   Updated: 2022/11/17 21:59:19 by jpizarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	check_fed(t_philo *philo)
{
	if (philo->data->meals > 0 && philo->meals >= philo->data->meals)
		return (1);
	return (0);
}