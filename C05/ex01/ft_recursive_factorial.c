/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkumwan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 15:01:25 by jkumwan           #+#    #+#             */
/*   Updated: 2023/06/24 15:08:22 by jkumwan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	fact_value;

	fact_value = 1;
	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (fact_value);
	if (nb > 1)
		fact_value = ft_recursive_factorial(nb - 1);
	fact_value *= nb;
	return (fact_value);
}

/*#include <stdio.h>
int	main(void)
{
	printf("%d", ft_recursive_factorial(-1));
}*/