/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkumwan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 12:33:18 by jkumwan           #+#    #+#             */
/*   Updated: 2023/06/12 12:40:18 by jkumwan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	index;
	int	length;

	index = 0;
	length = 0;
	while (str[index] != '\0')
	{
		length++;
		index++;
	}
	return (length);
}

// int 	main(void)
// {
// 	char	text[] = "hellopuppy";

// 	printf("%d", ft_strlen(text));
// }
