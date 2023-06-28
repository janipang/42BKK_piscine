/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkumwan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 17:12:58 by jkumwan           #+#    #+#             */
/*   Updated: 2023/06/24 17:13:17 by jkumwan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int	new_int;

	if (index == 0)
	{
		new_int = 0;
	}
	else if (index == 1)
	{
		new_int = 1;
	}
	else if (index > 1)
	{
		new_int = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	}
	else
	{
		new_int = -1;
	}
	return (new_int);
}

/*#include <stdio.h>
int	main(void)
{
	printf("%d", ft_fibonacci(-1));
}*/