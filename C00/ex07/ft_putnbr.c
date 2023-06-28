/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkumwan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 21:23:28 by jkumwan           #+#    #+#             */
/*   Updated: 2023/06/09 09:52:22 by jkumwan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_digit(int int_a)
{
	char	char_a;

	char_a = '0' + int_a;
	write(1, &char_a, 1);
}

void	print_pos(int nb)
{
	int	digit_number;
	int	power;

	power = 1000000000;
	while ((nb / power) == 0)
	{
		power /= 10;
	}
	while (power > 0)
	{
		digit_number = nb / power;
		print_digit(digit_number);
		nb %= power;
		power /= 10;
	}
}

void	print_neg(int nb)
{
	write(1, "-", 1);
	print_pos(-1 * nb);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else if (nb < 0)
	{
		print_neg(nb);
	}
	else if (nb == 0)
	{
		write(1, "0", 1);
	}
	else if (nb > 0)
	{
		print_pos(nb);
	}
}

// int	main(void)
// {
// 	ft_putnbr(2147483647);
// }
