/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdavurov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 10:41:25 by rdavurov          #+#    #+#             */
/*   Updated: 2024/02/28 10:41:27 by rdavurov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	unsigned int	i;
	char			cc;

	cc = (char) c;
	i = ft_strlen(s);
	while (i > 0)
	{
		if (s[i - 1] == cc && cc != '\0')
			return ((char *)&s[i - 1]);
		i--;
	}
	if (s[i] == cc)
		return ((char *)&s[i]);
	return (NULL);
}
// int main (void)
// {
// 	char i[] = "Raniia";
// 	printf ("%s", ft_strrchr(i, 'a'));
// }