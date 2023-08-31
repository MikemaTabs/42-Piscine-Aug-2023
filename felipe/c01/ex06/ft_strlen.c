/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbascuna <fbascuna@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 12:04:21 by fbascuna          #+#    #+#             */
/*   Updated: 2023/08/15 12:39:36 by fbascuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	cont;

	cont = 0;
	while (str[cont])
	{
		cont++;
	}
	return (cont);
}
/*
#include <stdio.h>

int	main(void)
{
	int	a;
	char	*c = "string";

	a = ft_strlen(c);
	printf("%d", a);
}
*/