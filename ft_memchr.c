/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavurov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 12:26:44 by rdavurov          #+#    #+#             */
/*   Updated: 2024/03/06 12:26:46 by rdavurov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>
// #include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*ss;
	char	cc;

	cc = (char)c;
	ss = (char *)s;
	i = 0;
	while (ss[i] != '\0')
	{
		if (ss[i] == cc && (i + 1) <= n)
			return ((char *)&ss[i]);
		i++;
	}
	if (ss[i] == cc)
		return ((char *)&ss[i]);
	return (NULL);
}
// int main (void)
// {
// 	char i[] = "Raniia";
// 	printf ("%s", (char *)ft_memchr(i, 'i', 5));
// }