/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkumwan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 23:23:51 by jkumwan           #+#    #+#             */
/*   Updated: 2023/06/24 23:27:45 by jkumwan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	th;
	int	each_length;

	each_length = 0;
	th = 1;
	while (th < argc)
	{
		while (*argv[th])
		{
			write(1, argv[th], 1);
			argv[th]++;
		}
		argv[th] -= each_length;
		write(1, "\n", 1);
		th++;
	}
	return (0);
}
