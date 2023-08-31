/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbascuna <fbascuna@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 19:43:50 by fbascuna          #+#    #+#             */
/*   Updated: 2023/08/27 12:56:25 by fbascuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	h;

	h = 1;
	while (h < argc)
	{
		i = 0;
		while (argv[h][i])
		{
			write(1, &argv[h][i], 1);
			i++;
		}
		write(1, "\n", 1);
		h++;
	}
	return (0);
}
