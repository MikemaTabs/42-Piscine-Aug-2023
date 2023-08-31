/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbascuna <fbascuna@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 15:40:48 by fbascuna          #+#    #+#             */
/*   Updated: 2023/08/17 20:32:25 by fbascuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i])
	{
		if ((str[i] >= 32) && (str[i] <= 126))
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
	printf("%d", ft_str_is_printable("a9aifgfg"));
	printf("\n%d", ft_str_is_printable("asdasdapoPOAG"));
	printf("\n%d", ft_str_is_printable("as13dasd"));
	printf("\n%d", ft_str_is_printable("D9GSH989jisg0d'¡`+"));
}
*/