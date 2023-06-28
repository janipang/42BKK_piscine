/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkumwan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 10:16:17 by jkumwan           #+#    #+#             */
/*   Updated: 2023/06/12 10:21:50 by jkumwan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

// int	main(void)
// {
// 	int	a;
// 	int	b;
// 	int	div_res;
// 	int	mod_res;
// 	int	*div;
// 	int	*mod;

// 	a = 17;
// 	b = 4;
// 	div = &div_res;
// 	mod = &mod_res;
// 	ft_div_mod(a, b, div, mod);
// 	printf("div result: %d	mod result: %d", div_res, mod_res);
// }
