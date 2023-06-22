#include <unistd.h>
#include <stdio.h>

void	gen_unsigned_binary(int unsign_dec, int *bin_array)
{
	int	divider;
	int	*check_point = bin_array;

	bin_array++;
	divider = 2147483648 / 2;
	while (divider > 0)
	{
		*bin_array = unsign_dec / divider;
		unsign_dec %= divider;
		divider /= 2;
		bin_array++;
	}
	*bin_array = '\0';
}

int	*convert_to_base(int dec_num, int base_system, int *bin_array)
{	
	if (dec_num < 0)
	{
		bin_array[0] = 1;
		dec_num = dec_num - (-2147483648);
	}
	else
	{
		bin_array[0] = 0;
	}
	gen_unsigned_binary(dec_num, bin_array);
	return (bin_array);
}

int in_base_system(char *base)
{
	int	length;
	int runner;

	length = 0;
	runner = 1;
	while (*base != '\0')
	{
		if(*str == '+' || *str == '-')
		{
			return (0);
		}
		while(*(base + runner) != '\0')
		{
			if (*base == *(base + runner))
			{
				return (0);
			}
			runner++;
		}
		runner = 1;
		length++;
		base++;
	}

	return (length);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int bin_array[33];
	int *pt_bin_array;

	pt_bin_array = &bin_array[0];
	if (in_base_system(base) > 1)
	{
		convert_to_base(9, in_base_system(base), pt_bin_array);

	}
	// printf("binary: ");
	// for(int i =0 ; i <32 ;i++)
	// {
	// 	printf("%d",bin_array[i]);
	// }
}
int main(void)
{
	ft_putnbr_base(9,"wertyuio"); //1001
}
