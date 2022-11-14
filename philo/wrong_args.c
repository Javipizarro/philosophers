/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wrong_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpizarro <jpizarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 17:39:42 by jpizarro          #+#    #+#             */
/*   Updated: 2022/10/30 17:55:59 by jpizarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

/*
**	Verifies whether the arguments are valid.
*/

int	wrong_args(int argc, char *argv[])
{
	int i;

	i = 0;
	if (argc < 5 || argc > 6)
		return (print_error(ARGNUM));
	while (++i < argc)
	{
		if (!ft_strisdigit(argv[i]))
			return (print_error(ARGDIG));
		if (ft_strlen(argv[i]) > 10)	
			return (print_error(ARGINT));
		if (ft_strlen(argv[i]) == 1 && argv[i][0] == '0')
			return (print_error(ARGINT));
		if (ft_strlen(argv[i]) == 10 && ft_strcmp(argv[i], "2147483647") > 0)
			return (print_error(ARGINT));
	}
	return (0);
}