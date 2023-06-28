/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkumwan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 01:00:41 by jkumwan           #+#    #+#             */
/*   Updated: 2023/06/16 01:38:22 by jkumwan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char	*checkpoint;
	char	*init;

	if (*to_find == '\0')
	{
		return (str);
	}
	init = to_find;
	while (*str != '\0')
	{
		checkpoint = str;
		while (*str == *to_find)
		{
			to_find++;
			str++;
			if (*to_find == '\0')
			{
				return (checkpoint);
			}
		}
		to_find = init;
		str = checkpoint;
		str++;
	}
	return (0);
}

/*#include <stdio.h>
int 	main(void)
{
	char	haystack[] = "Janista do love coding";
	char	*ta = ft_strstr(haystack, "ta");
	printf("the: %s\n", ta);
}*/
