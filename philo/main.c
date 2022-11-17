/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpizarro <jpizarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 13:43:53 by jpizarro          #+#    #+#             */
/*   Updated: 2022/11/17 22:11:40 by jpizarro         ###   ########.fr       */
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
	ret = check_args(argc, argv);
	if (!ret)
	{
		ret = init_data(&data, argc, argv);
		if (!ret)
		{
			ret = init_philos(&data, &philos);
			ret = end_philos(philos);
////
//	printf("hasta aquí OK\n");
////
		}
		ret = free_data(&data);
	}
	return (ret);
}



// TO DO:
//	- When a philo dies, the program does't exit correctly
//	- Prepare the exit of the program
//		- Print all the errors
//		- When someone died
//		- When everyone is fed
//		- Free all data and philos
//		- Close all threads
//		- Close all mutex

// ERRORS:
//		- When there is one philo, he eats!! // ./philo 1 300 200 200 10
