/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkumwan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 21:46:28 by jkumwan           #+#    #+#             */
/*   Updated: 2023/06/27 22:23:16 by jkumwan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	runner;

	runner = 0;
	while (runner * runner <= nb && runner < 46341)
	{
		if (runner * runner == nb)
		{
			return (runner);
		}
		runner++;
	}
	return (0);
}

/*#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_sqrt(2147483647));
	printf("%d\n", ft_sqrt(2147395600));
	printf("%d\n", ft_sqrt(2147302921));
}*/