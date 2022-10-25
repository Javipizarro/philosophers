/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpizarro <jpizarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 13:43:53 by jpizarro          #+#    #+#             */
/*   Updated: 2022/10/25 23:02:28 by jpizarro         ###   ########.fr       */
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

	check_args(argc, argv);
	init_data(&data, argc, argv);
	philos =init_philos(&data);


//	printf("%d\n", data.start_time.tv_usec);

	free_data(&data, &philos);
	printf("todo correcto, de momento\n");
	return (0);
}


// TO DO:
//	- Write the check_alive function
//	- Finish the routine function
//	- Prepare the exit of the program
