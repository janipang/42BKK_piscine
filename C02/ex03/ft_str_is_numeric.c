/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    ft_str_is_numeric.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkumwan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 17:04:56 by jkumwan           #+#    #+#             */
/*   Updated: 2023/06/14 17:07:03 by jkumwan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	while (*str >= '0' && *str <= '9')
	{
		str++;
	}
	if (*str == '\0')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

// #include <stdio.h>
// int main(void)
// {
//     printf("%d", ft_str_is_numeric("12345A3677"));
// }