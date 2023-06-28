/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkumwan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 22:17:47 by jkumwan           #+#    #+#             */
/*   Updated: 2023/06/24 22:19:10 by jkumwan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	dvd;

	if (nb < 2)
	{
		return (0);
	}
	dvd = 2;
	while (dvd <= nb / dvd)
	{
		if (!(nb % dvd))
		{
			break ;
		}
		dvd++;
	}
	if (dvd > nb / dvd)
	{
		return (1);
	}
	return (0);
}

/*#include <stdio.h>
int	main(void)
{
	printf("%d", ft_is_prime(97));
}*/