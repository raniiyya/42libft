/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavurov <rdavurov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 15:26:14 by rdavurov          #+#    #+#             */
/*   Updated: 2024/03/17 22:11:53 by rdavurov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*tmp;
	int		i;

	tmp = (char *)malloc(sizeof(char) * len);
	if (tmp == NULL)
		return (NULL);
	i = 0;
	while (s != NULL && i < (int)len)
	{
		tmp[i] = s[start];
		i++;
		start++;
	}
	return (tmp);
}
// int main(void)
// {
// 	char str[] = "Hello, World!";
// 	printf ("%s", ft_substr(str, 4, 5));
// }