/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    ft_str_is_lowercase.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkumwan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 18:28:09 by jkumwan           #+#    #+#             */
/*   Updated: 2023/06/14 18:28:38 by jkumwan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	while (*str >= 'a' && *str <= 'z')
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
//     printf("%d", ft_str_is_lowercase("sdfg0hjkd"));
// }