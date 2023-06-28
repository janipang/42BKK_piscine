/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkumwan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 10:36:08 by jkumwan           #+#    #+#             */
/*   Updated: 2023/06/12 10:43:12 by jkumwan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	old_a;

	old_a = *a;
	*a = *a / *b;
	*b = old_a % *b;
}

// int	main(void)
// {
// 	int	a;
// 	int	b;
// 	int	*pa;
// 	int	*pb;

// 	a = 11;
// 	b = 3;
// 	pa = &a;
// 	pb = &b;
// 	ft_ultimate_div_mod(pa, pb);
// 	printf("a: %d	b: %d", a , b);
// }
