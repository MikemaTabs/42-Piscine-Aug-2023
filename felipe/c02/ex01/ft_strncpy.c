/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbascuna <fbascuna@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 21:40:45 by fbascuna          #+#    #+#             */
/*   Updated: 2023/08/16 21:52:23 by fbascuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
	i++;
	}
	return (dest);
}
/*
#include <stdio.h>

int main(void)
{
    char dest[] = "aaaaamente";
    char src[] = "suaveaaaaaaaaaaaaaaaa";
    ft_strncpy(dest, src, 5);
    printf("%s", dest);
}
*/