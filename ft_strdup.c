/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavurov <rdavurov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 22:46:57 by rdavurov          #+#    #+#             */
/*   Updated: 2024/03/17 22:06:06 by rdavurov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

char	*ft_strdup(const char *s)
{
	char	*tmp;

	tmp = (char *)malloc(sizeof(char) * ft_strlen(s));
	ft_memcpy(tmp, s, ft_strlen(s));
	return (tmp);
}
// int main(void)
// {
// 	char *s = "Hello, World!";
// 	printf("%s", ft_strdup(s));
// }