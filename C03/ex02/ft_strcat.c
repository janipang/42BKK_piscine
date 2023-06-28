/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkumwan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 00:38:19 by jkumwan           #+#    #+#             */
/*   Updated: 2023/06/16 00:38:25 by jkumwan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	char	*return_val;

	return_val = dest;
	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (return_val);
}

/*#include <stdio.h>
int	main(void){
	char	pt1[50] = "janipang", *pt2 = " love you";
	printf("%s", ft_strcat(pt1, pt2));
}*/
