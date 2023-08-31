/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbascuna <fbascuna@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 18:09:10 by fbascuna          #+#    #+#             */
/*   Updated: 2023/08/14 19:51:48 by fbascuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a;
	mod = *b;
	*a = div / mod;
	*b = div % mod;
}
/*
#include <stdio.h>

int	main(void)
{
	int	a;
	int	b;

	a = 254;
	b = 3;
	ft_ultimate_div_mod(&a, &b);
	printf("div = %d, mod = %d", a, b);
}
*/