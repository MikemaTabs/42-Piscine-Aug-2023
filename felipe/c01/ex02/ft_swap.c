/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbascuna <fbascuna@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 12:46:08 by fbascuna          #+#    #+#             */
/*   Updated: 2023/08/14 16:25:07 by fbascuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}
/*
#include <stdio.h>

int	main(void)
{
	int	a;
	int	b;
	int	*pa;
	int	*pb;

	a = 42;
	b = 24;
	pa = &a;
	pb = &b;
	ft_swap(pa, pb);
	printf("a = %d, b = %d", a, b);
}
*/