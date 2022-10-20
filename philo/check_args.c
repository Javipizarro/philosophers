/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpizarro <jpizarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 17:39:42 by jpizarro          #+#    #+#             */
/*   Updated: 2022/10/20 21:25:57 by jpizarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

/*
**	Verifies whether the arguments are valid.
*/

void	check_args(int argc, char *argv[])
{
	int i;

	i = 0;
	if (argc < 5 || argc > 6)
		print_error(NULL, ARGNUM);
	while (++i < argc)
	{
		if (!ft_strisdigit(argv[i]))
			print_error(NULL, ARGDIG);
		if (ft_strlen(argv[i]) > 10)	
			print_error(NULL, ARGINT);
		if (ft_strlen(argv[i]) == 1 && argv[i][0] == '0')
			print_error(NULL, ARGINT);
		if (ft_strlen(argv[i]) == 10 && ft_strcmp(argv[i], "2147483647") > 0)
			print_error(NULL, ARGINT);
	}
	
}