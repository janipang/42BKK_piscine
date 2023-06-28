/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkumwan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 15:15:27 by jkumwan           #+#    #+#             */
/*   Updated: 2023/06/24 15:15:54 by jkumwan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	expo_value;

	expo_value = 1;
	if (power < 0)
		return (0);
	while (power > 0)
	{
		expo_value *= nb;
		power--;
	}
	return (expo_value);
}

/*#include <stdio.h>
int main(void){
    printf("%d", ft_iterative_power(-2, 3));
}*/