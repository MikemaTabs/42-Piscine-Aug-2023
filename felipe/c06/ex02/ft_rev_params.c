/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbascuna <fbascuna@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 12:57:12 by fbascuna          #+#    #+#             */
/*   Updated: 2023/08/27 13:04:32 by fbascuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	h;

	h = argc - 1;
	while (h > 0)
	{
		i = 0;
		while (argv[h][i])
		{
			write(1, &argv[h][i], 1);
			i++;
		}
		write(1, "\n", 1);
		h--;
	}
	return (0);
}
