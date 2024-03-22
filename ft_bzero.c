/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavurov <rdavurov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 13:22:17 by rdavurov          #+#    #+#             */
/*   Updated: 2024/03/13 19:27:33 by rdavurov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*d;

	d = (unsigned char *)s;
	i = 0;
	while (n > 0)
	{
		d[i] = 0;
		i++;
		n--;
	}
}
// int main() {
//     char data[10] = "Hello";

//     ft_bzero(data, sizeof(data));

//     for (size_t i = 0; i < sizeof(data); i++) {
//         printf("%c ", data[i]);
//     }

//     return (0);
// }