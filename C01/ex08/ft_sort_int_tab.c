/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkumwan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 13:22:08 by jkumwan           #+#    #+#             */
/*   Updated: 2023/06/12 13:44:26 by jkumwan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	main_num;
	int	compare_num;
	int	temp_num;

	main_num = 0;
	while (main_num < size - 1)
	{
		compare_num = main_num + 1;
		while (compare_num <= size - 1)
		{
			if (tab[main_num] > tab[compare_num])
			{
				temp_num = tab[main_num];
				tab[main_num] = tab[compare_num];
				tab[compare_num] = temp_num;
			}
			compare_num++;
		}
		main_num++;
	}
}

// int	main(void)
// {
// 	int array[10] = {3,7,1,5,2,6,9,8,0,4};
// 	for (int i = 0; i < 10; i++)
// 	{
// 		printf("%d", array[i]);	
// 	}
// 	printf("\n");

// 	int *pt = &array[0];
// 	ft_sort_int_tab(pt, 10);

// 	for (int i = 0; i < 10; i++)
// 	{
// 		printf("%d", array[i]);	
// 	}
// 	printf("\n");
// }
