/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavurov <rdavurov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 20:12:11 by rdavurov          #+#    #+#             */
/*   Updated: 2024/03/17 22:12:14 by rdavurov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*tmp;
	size_t	len;

	len = ft_strlen(s1) + ft_strlen(s2);
	tmp = (char *)malloc(sizeof(char) * len + 1);
	if (tmp == NULL)
		return (NULL);
	ft_strlcat(tmp, (char const *)s1, ft_strlen(s1) + 1);
	ft_strlcat(tmp, (char const *)s2, ft_strlen(s2) + 1 + ft_strlen(tmp));
	return (tmp);
}
// int	main (void)
// {
//     char s1[] = "42 ";
//     char s2[] = "Warsaw";
// 	char *str = ft_strjoin(s1, s2);
//     printf("%s", str);
// }