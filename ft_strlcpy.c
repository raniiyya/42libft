/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavurov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 10:01:29 by rdavurov          #+#    #+#             */
/*   Updated: 2024/02/29 10:01:32 by rdavurov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>
// #include <bsd/string.h>
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' || size > i)
	{
		dst[i] = src[i];
		i++;
	}
	return (ft_strlen(src));
}
// int main (void)
// {
//     const char src[] = "Davurova";
// 	char dest[] = "Raniia";

//     printf("%ld", ft_strlcpy(dest, src, 3));
// }