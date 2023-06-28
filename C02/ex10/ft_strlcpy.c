/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkumwan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 13:32:22 by jkumwan           #+#    #+#             */
/*   Updated: 2023/06/15 13:34:04 by jkumwan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	length_of(char *source)
{
	int	length;

	length = 0;
	while (*source != '\0')
	{
		source++;
		length++;
	}
		source -= length;
	return (length);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int	src_length;

	src_length = length_of(src);
	if (size <= 0)
	{
		return (src_length);
	}
	while (*src != '\0' && size - 1 > 0)
	{
		*dest = *src;
		dest++;
		src++;
		size--;
	}
	while (size > 0)
	{
		*dest = '\0';
		dest++;
		size--;
	}
	return (src_length);
}

// #include <string.h>
// #include <stdio.h>
// int 	main(void)
// {
//     char name[50] = "janipang";
//     char *ptname = &name[0];
//     printf("%u\n", ft_strlcpy(ptname, "helicopter",7));
// 	printf("%s\n", name);
// 	printf("%lu", strlen(name));
// }
