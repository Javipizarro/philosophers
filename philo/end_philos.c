/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   end_philos.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpizarro <jpizarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 15:09:32 by jpizarro          #+#    #+#             */
/*   Updated: 2022/11/10 18:36:22 by jpizarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	end_philos(t_philo *philos)
{
	int i;
	int	ret;

	i = -1;
	ret = 0;
	while (++i < philos->data->guests)
		if (pthread_join(philos[i].th, NULL))
			ret = print_error(ENDPHILO);
	free (philos);
	philos = NULL;
	return (ret);
}
