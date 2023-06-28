/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkumwan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 00:53:17 by jkumwan           #+#    #+#             */
/*   Updated: 2023/06/16 00:53:19 by jkumwan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*return_val;

	return_val = dest;
	while (*dest != '\0')
	{
		dest++;
	}
	while (nb > 0)
	{
		if (*src == '\0')
		{
			break ;
		}
		*dest = *src;
		dest++;
		src++;
		nb--;
	}
	*dest = '\0';
	return (return_val);
}

/*#include <stdio.h>
int	main(void)
{
	char	pt1[50] = "janipang", *pt2 = " love you";
	printf("%s", ft_strncat(pt1, pt2, 4));
}*/
