/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkumwan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 21:54:10 by jkumwan           #+#    #+#             */
/*   Updated: 2023/06/26 21:54:12 by jkumwan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	sort_params(int argc, char *argv[], int th, int sub_th)
{
	char	*buffer;
	int	i;

	while (th < (argc - 1))
	{
		sub_th = th + 1;
		while (sub_th < argc)
		{
			i = 0;
			while (argv[sub_th][i] == argv[th][i])
			{
				if (argv[sub_th][i++] == '\0')
					break ;
			}
			if (argv[sub_th][i] < argv[th][i])
			{
				buffer = argv[th];
				argv[th] = argv[sub_th];
				argv[sub_th] = buffer;
			}
			sub_th++;
		}
		th++;
	}
	return (0);
}

void	display_it(int argc, char *argv[])
{
	int	th;
	int	i;

	th = 1;
	while (th < argc)
	{
		i = 0;
		while (argv[th][i])
		{
			write(1, &argv[th][i], 1);
			i++;
		}
		write(1, "\n", 1);
		th++;
	}
}

int	main(int argc, char *argv[])
{
	int	sub_th;

	sub_th = 0;
	sort_params(argc, argv, 1, sub_th);
	display_it(argc, argv);
}

/*int	main(int argc, char *argv[])
{
	char	*opto[] = {"a.out", "02", "01", "300", "005", "422"};
	int	sub_th;

	sort_params(6, opto, 1, sub_th);
	display_it(6, opto);
}*/
