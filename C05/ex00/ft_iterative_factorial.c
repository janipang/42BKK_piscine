/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkumwan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 14:48:11 by jkumwan           #+#    #+#             */
/*   Updated: 2023/06/24 14:57:21 by jkumwan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	fact_value;

	if (nb < 0)
	{
		return (0);
	}
	else
	{
		fact_value = 1;
		while (nb > 0)
		{
			fact_value *= nb--;
		}
		return (fact_value);
	}
}

/*#include <stdio.h>
int	main(void)
{
	printf("%d", ft_iterative_factorial(5));
}*/
