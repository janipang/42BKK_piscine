/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkumwan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 21:23:28 by jkumwan           #+#    #+#             */
/*   Updated: 2023/06/08 23:13:32 by jkumwan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	gen_num1(int a)
{
	a += 1;
	return (a);
}

int	gen_num2(int b)
{
	b += 1;
	return (b);
}

void	display_num(int a, int b)
{
	char	ca1;
	char	ca2;
	char	cb1;
	char	cb2;

	ca1 = '0' + (a / 10);
	ca2 = '0' + (a % 10);
	cb1 = '0' + (b / 10);
	cb2 = '0' + (b % 10);
	if (!(a == 0 && b == 1))
	{
		write(1, ", ", 2);
	}
	write(1, &ca1, 1);
	write(1, &ca2, 1);
	write(1, " ", 1);
	write(1, &cb1, 1);
	write(1, &cb2, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	b = 1;
	while (a <= 98)
	{
		while (b <= 99)
		{
			display_num(a, b);
			b = gen_num2(b);
		}
		a = gen_num1(a);
		b = gen_num2(a);
	}
}

// int	main(void)
// {
// 	ft_print_comb2();
// }
