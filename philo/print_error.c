/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpizarro <jpizarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 17:42:53 by jpizarro          #+#    #+#             */
/*   Updated: 2022/09/20 21:49:53 by jpizarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	print_error(t_data *data, int error)
{
	if (error == ARGNUM)
		printf("The argument number must be 5 or 6\n");
	else if (error == ARGDIG)
		printf("The arguments must contain only by digits\n");
	else if (error == ARGINT)
		printf("The arguments must be integers above 0 and below 2147483647\n");
	else if (error == SETTIME)
		printf("Error while setting time\n");
	exit_philo(data);
}