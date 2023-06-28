/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkumwan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 21:23:28 by jkumwan           #+#    #+#             */
/*   Updated: 2023/06/09 15:36:40 by jkumwan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	gen_combn(int counter,	int n_long)
{
	int	num_runner[10];
	int	a;

	if (counter < n_long)
	{
		num_runner[counter] = counter;
		while (num_runner[counter] <= 9)
		{
			a = num_runner[counter] + '0';
			write(1, &a, 1);
			counter++;
			gen_combn(counter, n_long);
			num_runner[counter]++;
		}
		num_runner[counter] = 0;
		counter--;
		write(1, "\t", 1);
	}
}

void	ft_print_combn(int n)
{
	gen_combn(0, n);
}

int	main(void)
{
	ft_print_combn(2);
}
