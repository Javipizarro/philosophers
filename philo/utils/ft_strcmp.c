/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpizarro <jpizarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 10:41:54 by jpizarro          #+#    #+#             */
/*   Updated: 2022/09/20 21:19:00 by jpizarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**	Compares the characters in the null-terminated strings
**	's1' and 's2'. The comparison is done using unsigned characters, so that
**	`\200' is greater than `\0'.
**	Returns an integer greater than, equal to, or less than 0, according as
**	the string 's1' is greater than, equal to, or less than the string 's2'.
*/

int	ft_strcmp(const char *s1, const char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}
