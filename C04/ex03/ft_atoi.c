/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkumwan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 17:57:01 by jkumwan           #+#    #+#             */
/*   Updated: 2023/06/23 17:57:03 by jkumwan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_space(char *str)
{
	if ((*str >= 9 && *str <= 13) || *str == 32)
		return (1);
	return (0);
}

int	is_sign(char *str, int *sign)
{
	if (*str == '+')
		return (1);
	if (*str == '-')
	{
		*sign *= -1;
		return (1);
	}
	return (0);
}

int	ft_atoi(char *str)
{
	int	sign;
	int	value;

	sign = 1;
	value = 0;
	while (is_space(str))
		str++;
	while (is_sign(str, &sign))
		str++;
	while (*str >= '0' && *str <= '9')
	{
		value = (value * 10) + (*str - '0');
		str++;
	}
	return (sign * value);
}

/*#include <stdio.h>
int     main(void)
{
    printf("%d", ft_atoi(" \v---+--+123456008.9ab567"));
    return (0);
}*/