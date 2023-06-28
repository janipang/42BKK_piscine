/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkumwan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 18:32:30 by jkumwan           #+#    #+#             */
/*   Updated: 2023/06/14 18:32:34 by jkumwan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	while (*str >= 'A' && *str <= 'Z')
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
//     printf("%d", ft_str_is_uppercase("ABSOLUTELYYES"));
// }
