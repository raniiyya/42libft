/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavurov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 12:26:56 by rdavurov          #+#    #+#             */
/*   Updated: 2024/03/06 12:26:58 by rdavurov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	counter;
	int	sign;

	counter = 0;
	i = 0;
	while ((nptr[i] >= '\t' && nptr[i] <= '\r') || nptr[i] == 32)
		i++;
	sign = 1;
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			sign = -1;
		i++;
	}
	while (ft_isdigit(nptr[i]))
	{
		counter = counter * 10 + nptr[i] - '0';
		i++;
	}
	return (counter * sign);
}
// int main(void)
// {
// 	printf("%d\n", atoi("  \n \t \r+123kl456ll"));
// 	printf("%d", ft_atoi("  \n \t \r+123kl456ll"));
// 	return (0);
// }