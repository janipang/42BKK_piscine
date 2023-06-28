/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkumwan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 00:22:42 by jkumwan           #+#    #+#             */
/*   Updated: 2023/06/16 00:24:11 by jkumwan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	diff;

	while (n > 0)
	{
		if (*s1 != *s2)
		{
			diff = *s1 - *s2;
			return (diff);
		}
		if (*s1 == '\0')
		{
			return (0);
		}
		s1++;
		s2++;
		n--;
	}
	return (0);
}

/*#include <stdio.h>
int	main(void){
	char	*pt1 = "1234567A", *pt2 = "1234567";
	printf("%d", ft_strncmp(pt1, pt2, 11));
}*/
