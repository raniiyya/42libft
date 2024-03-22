/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavurov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 11:58:06 by rdavurov          #+#    #+#             */
/*   Updated: 2024/02/28 11:58:08 by rdavurov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	unsigned const char	*s;
	unsigned const char	*c;

	i = 0;
	s = (unsigned const char *)s1;
	c = (unsigned const char *)s2;
	while (i < n && s[i] == c[i] && i < (n - 1))
		i++;
	return (s[i] - c[i]);
}
// int	main(void)
// {
// 	unsigned int	n;
// 	char			s1[] = "usaddd";
// 	char			s2[] = "usa";

// 	n = 3;
// 	printf ("%d", ft_memcmp(s1, s2, n));
// }