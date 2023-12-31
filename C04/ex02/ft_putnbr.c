/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkumwan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 17:56:47 by jkumwan           #+#    #+#             */
/*   Updated: 2023/06/23 17:56:49 by jkumwan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_number(int dec_num)
{
	char	alpha;

	if (dec_num >= 10)
	{
		print_number(dec_num / 10);
		print_number(dec_num % 10);
	}
	else
	{
		alpha = '0' + dec_num;
		write(1, &alpha, 1);
	}
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else if (nb < 0)
	{
		write(1, "-", 1);
		nb *= -1;
		print_number(nb);
	}
	else
	{
		print_number(nb);
	}
}

/*int main(void)
{
	int n = -100080;
    ft_putnbr(n);
    return (0);
}*/