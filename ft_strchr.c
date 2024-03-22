/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavurov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 10:41:11 by rdavurov          #+#    #+#             */
/*   Updated: 2024/02/28 10:41:13 by rdavurov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <string.h>
// #include <stdio.h>
#include "libft.h"

char	*ft_strchr(const char *i, int c)
{
	unsigned int	s;
	char			cc;

	cc = (char)c;
	s = 0;
	while (i[s] != '\0')
	{
		if (i[s] == cc && cc != '\0')
			return ((char *)&i[s]);
		s++;
	}
	if (i[s] == cc)
		return ((char *)&i[s]);
	return (NULL);
}
// int main (void)
// {
// 	char i[] = "Raniia";
// 	printf ("%s", ft_strchr(i, 'n'));
// }