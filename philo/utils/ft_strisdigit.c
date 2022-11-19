/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strisdigit.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpizarro <jpizarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/11 14:30:23 by jpizarro          #+#    #+#             */
/*   Updated: 2022/11/19 18:26:05 by jpizarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Tests for a decimal digit character. Regardless of locale, this includes
**	the following characters only: `0' `1' `2' `3' `4' `5' `6' `7' `8' `9'.
**	Returns one if 'str' only contains digits or zero if 'str' contains other
**	character.
 */

int	ft_strisdigit(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		if (str[i] < '0' || str[i] > '9')
			return (0);
	return (1);
}
