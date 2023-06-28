/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkumwan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 18:36:15 by jkumwan           #+#    #+#             */
/*   Updated: 2023/06/14 18:36:21 by jkumwan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	while (*str >= 33 && *str <= 126)
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
// int main()
// {
//     printf("%d", ft_str_is_printable("a"));
//     printf("%d", ft_str_is_printable(" "));
//     printf("%d", ft_str_is_printable("\n"));
//     printf("%d", ft_str_is_printable("~"));
// }