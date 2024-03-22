/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavurov <rdavurov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 15:11:55 by rdavurov          #+#    #+#             */
/*   Updated: 2024/03/22 14:29:59 by rdavurov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>
// #include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*p;
	unsigned char	*c;

	if (!dest && !src)
		return (NULL);
	i = 0;
	p = (unsigned char *)dest;
	c = (unsigned char *)src;
	if (p > c)
	{
		while (n-- > 0)
			p[n] = c[n];
	}
	else
	{
		while (i++ < n)
			p[i] = c[i];
	}
	return (dest);
}
// int	main(void)
// {
// 	char dest[] = "Raniia";
// 	const char src[] = "Davurova";

// 	printf("src1 : %s\n", src);
// 	printf("dst1 : %s\n", dest);
// 	memmove(dest, src, 5);
// 	printf("src2 : %s\n", src);
// 	printf("dst2 : %s\n", dest);
// }