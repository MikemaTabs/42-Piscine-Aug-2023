/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbascuna <fbascuna@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 12:23:50 by fbascuna          #+#    #+#             */
/*   Updated: 2023/08/18 12:39:07 by fbascuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	h;

	i = 0;
	h = 0;
	while (dest[i])
	{
		i++;
	}
	while (src[h])
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
	printf("%s", ft_strcat(a, b));
}
*/