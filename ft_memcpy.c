/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavurov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 11:57:44 by rdavurov          #+#    #+#             */
/*   Updated: 2024/02/28 11:57:47 by rdavurov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*d;
	unsigned const char	*s;

	d = (unsigned char *)dest;
	s = (unsigned const char *)src;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
// int main (void)
// {
//     char dest[] = "Raniia";
//     const char src[] = "Davurova";

//     printf("src1 : %s\n", src);
//     printf("dst1 : %s\n", dest);
//     memcpy(dest, src, 5);
//     printf("src2 : %s\n", src);
//     printf("dst2 : %s\n", dest);
// }