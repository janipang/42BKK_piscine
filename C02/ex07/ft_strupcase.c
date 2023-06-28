/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkumwan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 18:52:41 by jkumwan           #+#    #+#             */
/*   Updated: 2023/06/14 18:52:46 by jkumwan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	length;

	length = 0;
	while (*str != '\0')
	{
		if (*str >= 'a' && *str <= 'z')
		{
			*str += 'A' - 'a';
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

// 	printf("%s", ft_strupcase(name));
// }
