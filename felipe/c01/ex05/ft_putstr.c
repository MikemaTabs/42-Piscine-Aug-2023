/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbascuna <fbascuna@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 19:52:24 by fbascuna          #+#    #+#             */
/*   Updated: 2023/08/15 12:03:24 by fbascuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	cont;

	cont = 0;
	while (str[cont])
	{
		write (1, &str[cont], 1);
		cont++;
	}
}
/*
int	main(void)
{
	char	*a;

	a = "string";
	ft_putstr(a);
}
*/