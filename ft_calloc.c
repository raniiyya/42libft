/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavurov <rdavurov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 21:43:39 by rdavurov          #+#    #+#             */
/*   Updated: 2024/03/17 22:49:23 by rdavurov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*tmp;

	tmp = (void *)malloc(nmemb * size);
	if (tmp == NULL)
		return (NULL);
	ft_bzero(tmp, nmemb * size);
	return (tmp);
}
// int main(void)
// {
// 	printf("%p", ft_calloc(10, 4));
// 	return (0);
// }