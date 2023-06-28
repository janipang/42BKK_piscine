/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkumwan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 16:39:07 by jkumwan           #+#    #+#             */
/*   Updated: 2023/06/24 16:39:43 by jkumwan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	expo_value;

	if (power >= 0)
	{
		expo_value = nb * ft_recursive_power(nb, power - 1);
		if (power == 0)
		{
			expo_value = 1;
		}
	}
	else
	{
		return (0);
	}
	return (expo_value);
}

/*#include <stdio.h>
int	main(void)
{
	printf("%d", ft_recursive_power(2, 7));
}*/