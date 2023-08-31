/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbascuna <fbascuna@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 12:31:15 by fbascuna          #+#    #+#             */
/*   Updated: 2023/08/18 12:38:49 by fbascuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	h;

	i = 0;
	h = 0;
	while (dest[i])
		i++;
	while (src[h] && h < nb)
	{
		dest[i + h] = src[h];
		h++;
	}
	dest[i + h] = '\0';
	return (dest);
}
/*
#include <stdio.h>

int	main(void)
{
	char a[20] = "con pulpa\n";
	char b[20] = "sin pulpa";
	printf("%s", ft_strncat(a, b, 20));
}
*/