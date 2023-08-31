/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ADDVALUECONWHILE.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbascuna <fbascuna@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 14:41:47 by fbascuna          #+#    #+#             */
/*   Updated: 2023/08/20 15:54:38 by fbascuna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	lector_arg(char *str, int col[4][2], int row[4][2])
{
	int	n;
	int	i;
	int	j;

	n = 0;
	i = 0;
	j = 0;
	while (n < 16)
	{
		if (i == 4)
		{
			i = 0;
			j++;
		}
		if (str[n] > '0' && str[n] < '5')
		{
			if (j < 2)
				col[i][j] = str[n] - '0';
			else
				row[i][j - 2] = str[n] - '0';
		}
		n++;
		i++;
	}
}

int	main(int argc, char *argv[])
{
	char	str[];

	str[] = "1 2 3 4 1 2 3 4 1 2 3 4 1 2 3 4";
}
