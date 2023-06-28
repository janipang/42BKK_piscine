/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkumwan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 14:46:16 by jkumwan           #+#    #+#             */
/*   Updated: 2023/06/12 15:19:31 by jkumwan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>
char	*ft_strcpy(char *dest, char *src)
{
	char	*return_val;

	return_val = dest;
	if (dest == NULL)
	{
		return (NULL);
	}
	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return (return_val);
}

// int	main(void)
// {
// 	char	name[] = "kindness";
// 	printf("%s\n", strcpy(name, "Hello"));
// 	printf("%s\n", ft_strcpy(name, "Puppy"));
// 	printf("name : %s", name);
// }
