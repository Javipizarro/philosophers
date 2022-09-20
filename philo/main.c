/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpizarro <jpizarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 13:43:53 by jpizarro          #+#    #+#             */
/*   Updated: 2022/09/20 21:31:55 by jpizarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

/*
**	Here is where everything starts.
*/

int	main(int argc, char *argv[])
{
	t_data	data;

	check_args(argc, argv);
	init_data(&data, argc, argv);

	printf("todo correcto, de momento\n");
	return (0);
}