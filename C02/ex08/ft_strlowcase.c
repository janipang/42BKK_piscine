/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkumwan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 19:10:03 by jkumwan           #+#    #+#             */
/*   Updated: 2023/06/14 19:10:17 by jkumwan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	length;

	length = 0;
	while (*str != '\0')
	{
		if (*str >= 'A' && *str <= 'Z')
		{
			*str -= 'A' - 'a';
		}
		str++;
		length++;
	}
	str -= length;
	return (str);
}

// #include <stdio.h>
// int main(void)
// {
// 	char	name[] = "HelloFromTheOther||^ 20 ^||Side";

// 	printf("%s", ft_strlowcase(name));
// }
