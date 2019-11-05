/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   counter.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonsandl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/03 15:56:51 by jonsandl          #+#    #+#             */
/*   Updated: 2019/11/05 08:51:06 by jonsandl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
counter has 2 different processes:
y = 0; will count the amount of characters inside the word.
y = 1; will count the amount of words inside the string.
*/

size_t		counter(char const *s, char c, size_t y)
{
	size_t	x;
	size_t	i;

	x = 0;
	i = 0;
	if (y == 1)
		while (s[++i])
		{
			if (s[i + 1] != c && s[i])
				x++;
			if (!s)
				return (x);
		}
	while (s[++i])
	{
		while (s[i] != c && s[i])
		{
			if (s[i] != c && s[i + 1] == c)
				x++;
			i++;
		}
	}
	return (x);
}
