/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkumwan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 12:41:06 by jkumwan           #+#    #+#             */
/*   Updated: 2023/06/12 13:19:44 by jkumwan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	index;
	int	temp_num;

	size--;
	index = 0;
	while (index < size)
	{
		temp_num = tab[index];
		tab[index] = tab[size];
		tab[size] = temp_num;
		index++;
		size--;
	}
}

// 	int	main(void)
// 	{
// 	int	numbers[10];
// 	int	*pt;

// 	for (int i = 0; i < 10; i++)
// 	{
// 		numbers[i] = i;
// 		printf("%d",numbers[i]);
// 	}
// 	printf("\n");

// 	pt = &numbers[0];
// 	ft_rev_int_tab(pt, 10);

// 	for (int i = 0; i < 10; i++)
// 	{
// 		printf("%d",numbers[i]);
// 	}
// 	printf("\n");
// }
