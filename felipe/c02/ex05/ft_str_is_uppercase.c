/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbascuna <fbascuna@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 15:38:10 by fbascuna          #+#    #+#             */
/*   Updated: 2023/08/17 16:21:40 by fbascuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			i++;
		else
			return (0);
	}
	return (1);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%d", ft_str_is_uppercase("ADIOSFUGHSODUFG"));
	printf("\n%d", ft_str_is_uppercase("asdasdapoPOAG"));
	printf("\n%d", ft_str_is_uppercase("as13dasd"));
	printf("\n%d", ft_str_is_uppercase("asdasd?¿+"));
}
*/