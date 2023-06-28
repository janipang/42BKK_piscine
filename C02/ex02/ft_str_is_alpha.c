/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkumwan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 16:53:37 by jkumwan           #+#    #+#             */
/*   Updated: 2023/06/14 16:54:06 by jkumwan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	while ((*str >= 'A' && *str <= 'Z') || (*str >= 'a' && *str <= 'z'))
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
//     printf("%d", ft_str_is_alpha("HelloWorld"));
// }