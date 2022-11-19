/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpizarro <jpizarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 13:43:53 by jpizarro          #+#    #+#             */
/*   Updated: 2022/11/19 18:37:36 by jpizarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

/*
**	Here is where everything starts.
*/

int	main(int argc, char *argv[])
{
	t_philo		*philos;
	t_data		data;
	int			ret;

	ret = 0;
	ret = wrong_args(argc, argv);
	if (!ret)
	{
		ret = init_data(&data, argc, argv);
		if (!ret)
		{
			ret = init_philos(&data, &philos);
			ret = end_philos(philos);
		}
		ret = free_data(&data);
	}
	return (ret);
}
