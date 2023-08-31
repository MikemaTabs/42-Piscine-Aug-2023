/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbascuna <fbascuna@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 18:59:13 by fbascuna          #+#    #+#             */
/*   Updated: 2023/08/13 19:17:48 by fbascuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	x;

	if (n >= 0)
	{
		x = 'P';
	}
	else
	{
		x = 'N';
	}
	write(1, &x, 1);
}
/*
int	main(void)
{
	ft_is_negative(-5);
}
*/