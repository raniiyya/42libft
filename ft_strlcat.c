/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavurov <rdavurov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 12:26:23 by rdavurov          #+#    #+#             */
/*   Updated: 2024/03/18 14:31:54 by rdavurov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <string.h>
// #include <bsd/string.h>
// #include <stdio.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	j;
	int				len;
	int				len2;

	len = ft_strlen(src);
	len2 = ft_strlen(dst);
	i = 0;
	j = 0;
	if (size == 0)
		return (len);
	if ((size_t)len2 >= size)
		return (size + len);
	while (dst[i] != '\0')
		i++;
	while (src[j] != '\0' && i < (size - 1))
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (len2 + len);
}
// int	main (void)
// {
//     unsigned int nb;
//     char src[] = "Warsaw";
//     char dest[] = "42 ";
// 	char src1[] = "Warsaw";
//     char dest1[] = "42 ";

//     nb = 6;
//     printf("%zu\n", ft_strlcat(dest, src, nb));
// 	printf("%s, %s\n", dest, src);
// 	printf("%zu\n", strlcat(dest1, src1, nb));
// 	printf("%s, %s\n", dest1, src1);
// }