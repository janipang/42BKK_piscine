/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkumwan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 15:31:08 by jkumwan           #+#    #+#             */
/*   Updated: 2023/06/14 15:33:53 by jkumwan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	over_size(char *source, int n)
{
	char	*counter;

	counter = source;
	while (*counter != '\0')
	{
		n--;
	}
	if (n < 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char	*return_val;

	return_val = dest;
	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	if (n > 0)
	{
		while (n > 0)
		{
			*dest = '\0';
			dest++;
			n--;
		}
	}
	return (return_val);
}

// #include <stdio.h>
// #include <string.h>
// int	main(void)
// {
// 	char name[20] = "maneenoimanenoi";

// 	printf("return val: %s\n", ft_strncpy(name, "hello", 5));
// 	printf("name: %s", name);
// }