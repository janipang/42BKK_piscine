/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkumwan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 22:41:09 by jkumwan           #+#    #+#             */
/*   Updated: 2023/06/24 22:43:15 by jkumwan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb)
{
	int	dvd;

	if (nb < 2)
	{
		return (2);
	}
	dvd = 2;
	while (dvd <= nb / dvd)
	{
		if (!(nb % dvd))
		{
			return (ft_find_next_prime(nb + 1));
		}
		dvd++;
	}
	if (dvd > nb / dvd)
	{
		return (nb);
	}
	return (nb);
}

/*#include <stdio.h>
int	main(void)
{
	printf("%d", ft_find_next_prime(43));
}*/