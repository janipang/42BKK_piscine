/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkumwan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 21:23:28 by jkumwan           #+#    #+#             */
/*   Updated: 2023/06/08 22:34:18 by jkumwan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	display_num(int i, int j, int k)
{
	char	a;
	char	b;
	char	c;

	a = '0' + i;
	b = '0' + j;
	c = '0' + k;
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
	if (!(i == 7 && j == 8 && k == 9))
	{
		write(1, ", ", 2);
	}
	else
	{
	}
}

void	ft_print_comb(void)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	while (i <= 7)
	{
		j = i + 1;
		while (j <= 8)
		{
			k = j + 1;
			while (k <= 9)
			{
				display_num(i, j, k);
				k++;
			}
			j++;
		}
		i++;
	}
}

// int	main(void)
// {
// 	ft_print_comb();
// }
