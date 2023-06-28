/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkumwan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 01:48:07 by jkumwan           #+#    #+#             */
/*   Updated: 2023/06/16 01:52:16 by jkumwan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	length(char *str)
{
	int	length;

	length = 0;
	while (*str != '\0')
	{
		length++;
		str++;
	}
	return (length);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	char	*init_dest;
	char	*init_src;

	init_dest = dest;
	init_src = src;
	dest += length(init_dest);
	if (size < length(init_dest))
	{
		return (length(init_src) + size);
	}
	while (size > 1 + length(init_dest))
	{
		if (*src == '\0')
		{
			return (length(init_dest));
		}
		*dest = *src;
		*(dest + 1) = '\0';
		dest++;
		src++;
	}
	return (length(init_dest) + length(src));
}

// #include <stdio.h>
// int 	main(void){
// 	char	haystack[50] = "janztaa";
//     printf("try to create:\t%d index\n", ft_strlcat(haystack, "_pang", 9));
// 	printf("result:\t\t\t%s\n", haystack);}
