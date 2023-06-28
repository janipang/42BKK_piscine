/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkumwan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 17:57:15 by jkumwan           #+#    #+#             */
/*   Updated: 2023/06/23 17:57:18 by jkumwan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	in_base_system(char *base)
{
	int	length;
	int	runner;

	length = 0;
	runner = 1;
	while (*base != '\0')
	{
		if (*base == '+' || *base == '-')
		{
			return (0);
		}
		while (*(base + runner) != '\0')
		{
			if (*base == *(base + runner))
			{
				return (0);
			}
			runner++;
		}
		runner = 1;
		length++;
		base++;
	}
	return (length);
}

void	convert_to_base(unsigned int dec_num, unsigned int base_th, char *base)
{
	int	alpha;

	if (dec_num >= base_th)
	{
		convert_to_base(dec_num / base_th, base_th, base);
		convert_to_base(dec_num % base_th, base_th, base);
	}
	else
	{
		alpha = *(base + dec_num);
		write(1, &alpha, 1);
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	base_th;

	if (in_base_system(base) > 1)
	{
		base_th = in_base_system(base);
		if (nbr == -2147483648)
		{
			write(1, "-", 1);
			convert_to_base(-nbr, base_th, base);
		}
		else if (nbr < 0)
		{
			write(1, "-", 1);
			nbr *= -1;
		}
		else if (nbr == 0)
		{
			write(1, "0", 1);
		}
		if (nbr > 0)
		{
			convert_to_base(nbr, base_th, base);
		}
	}
}

/*int main(void)
{
	char base[] = "0123456789ABCDEF";
	char *pt_base = &base[0];
	ft_putnbr_base(2024, pt_base);
}*/
