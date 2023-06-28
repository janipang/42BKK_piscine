/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_with_non_printable.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkumwan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 15:09:21 by jkumwan           #+#    #+#             */
/*   Updated: 2023/06/15 15:10:34 by jkumwan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_printable(char alpha)
{
	if (alpha >= 32 && alpha <= 126)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

void	write_hex_of(int alpha)
{
	int	hex1;
	int	hex2;

	hex1 = alpha / 16;
	hex2 = alpha % 16;
	hex1 = '0' + ((49 * (hex1 / 10)) + (hex1 % 10));
	hex2 = '0' + ((49 * (hex2 / 10)) + (hex2 % 10));
	write(1, &hex1, 1);
	write(1, &hex2, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	alpha;

	while (*str != '\0')
	{
		alpha = *str;
		if (is_printable(*str))
		{
			write(1, &alpha, 1);
		}
		else
		{
			write(1, "\\", 1);
			write_hex_of(alpha);
		}
		str++;
	}
}

// int	 main(void)
// {
//     char text[30] = "Coucou\ntu vas bien ?";
// 	ft_putstr_non_printable(text);
// }
