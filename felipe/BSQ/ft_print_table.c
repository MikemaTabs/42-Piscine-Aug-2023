/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_table.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbascuna <fbascuna@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 12:07:44 by fbascuna          #+#    #+#             */
/*   Updated: 2023/08/31 12:12:47 by fbascuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_table(int x, char **y)
{
	int	i;

	i = 0;
	while (y[i])
	{
		write(1, y[i], x);
		ft_putchar('\n');
		i++;
	}
}
