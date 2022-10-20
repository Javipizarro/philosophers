/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpizarro <jpizarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 17:42:53 by jpizarro          #+#    #+#             */
/*   Updated: 2022/10/20 21:22:53 by jpizarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	print_error(t_data *data, int error)
{
	if (error == ARGNUM)
	{
		printf("The number of argument must be 4 or 5:\n");
		printf("nbr_of_philosophers   time_to_die   time_to_eat   ");
		printf("time_to_sleep   [number_of_times_each_philosopher_must_eat]\n");
	}
	else if (error == ARGDIG)
		printf("The arguments must contain only digits\n");
	else if (error == ARGINT)
		printf("The arguments must be integers above 0 and below 2147483648\n");
	else if (error == SETTIME)
		printf("Error while setting time\n");
	exit_philo(data);
}