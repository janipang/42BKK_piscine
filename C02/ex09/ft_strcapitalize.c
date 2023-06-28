/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkumwan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 19:12:59 by jkumwan           #+#    #+#             */
/*   Updated: 2023/06/14 19:17:20 by jkumwan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_normal_char(char *str)
{
	if (*str >= 'A' && *str <= 'Z')
	{
		return (1);
	}
	else if (*str >= 'a' && *str <= 'z')
	{
		return (1);
	}
	else if (*str >= '0' && *str <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int	is_lower_case(char *str)
{
	if (*str >= 'a' && *str <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

int	is_upper_case(char *str)
{
	if (*str >= 'A' && *str <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

char	*ft_strcapitalize(char *str)
{
	int	length;

	length = 0;
	if (is_lower_case(str))
	{
		*str += 'A' - 'a';
	}
	while (*str != '\0')
	{
		if ((!is_normal_char(str)) && (is_lower_case(str + 1)))
		{
			*(str + 1) += 'A' - 'a';
		}
		else if ((is_normal_char(str)) && (is_upper_case(str + 1)))
		{
			*(str + 1) -= 'A' - 'a';
		}
		str++;
		length++;
	}
	str -= length;
	return (str);
}

// #include <stdio.h>
// int 	main(void)
// {
// 	char name[100] = "salut, com tu vas ? 42mots quar-deux; cinte+et+un";
//     printf("%s", ft_strcapitalize(name));
// }
