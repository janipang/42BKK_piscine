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

int	sort_params(int argc, char *argv[], int *count)
{
	char	*buffer;

	while (count[0] < (argc - 1))
	{
		count[1] = count[0] + 1;
		while (count[1] < argc)
		{
			count[2] = 0;
			while (argv[count[1]][count[2]] == argv[count[0]][count[2]])
			{
				if (argv[count[1]][count[2]++] == '\0')
					break ;
			}
			if (argv[count[1]][count[2]] < argv[count[0]][count[2]])
			{
				buffer = argv[count[0]];
				argv[count[0]] = argv[count[1]];
				argv[count[1]] = buffer;
			}
			count[1]++;
		}
		count[0]++;
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
	int	count[3];

	count[0] = 1;
	count[1] = 0;
	count[2] = 0;
	sort_params(argc, argv, count);
	display_it(argc, argv);
}

/*int	main(int argc, char *argv[])
{
	char	*opto[] = {"a.out", "02", "01", "300", "005", "422"};
	int	count[3];

	count[0] = 1;
	count[1] = 0;
	count[2] = 0;
	sort_params(6, opto, count);
	display_it(6, opto);
}*/