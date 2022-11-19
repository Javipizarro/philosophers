/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   join_philos.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpizarro <jpizarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 19:27:43 by jpizarro          #+#    #+#             */
/*   Updated: 2022/11/19 18:37:52 by jpizarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	join_philos(t_philo *philos)
{
	int	i;

	i = -1;
	while (++i < philos->data->guests)
		pthread_join(philos[i].th, NULL);
}
