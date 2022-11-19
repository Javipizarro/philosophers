/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpizarro <jpizarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 17:42:53 by jpizarro          #+#    #+#             */
/*   Updated: 2022/11/19 18:32:20 by jpizarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	print_error(int error)
{
	if (error == ARGNUM)
	{
		printf("The number of argument must be 4 or 5:\n");
		printf("nbr_of_philosophers   time_to_die   time_to_eat   ");
		printf("time_to_sleep   [number_of_times_each_philosopher_must_eat]\n");
	}
	else if (error == ARGINT)
		printf("The arguments must be integers above 0 and below 2147483648\n");
	else if (error == SETTIME)
		printf("Error while setting time\n");
	else if (error == INITSPOONS)
		printf("Error while initiating spoons\n");
	else if (error == DESTRSPOONS)
		printf("Error while detroying spoons\n");
	else if (error == INITPRINTER)
		printf("Error while initiating printer\n");
	else if (error == DESTRPRINTER)
		printf("Error while destroying printer\n");
	else if (error == CREAPHILO)
		printf("Error while creating philos\n");
	else if (error == ENDPHILO)
		printf("Error while ending philos\n");
	else if (error == MALLOC)
		printf("Error while using malloc(3)\n");
	return (error);
}
