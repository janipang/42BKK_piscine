int	ft_strlen(char *str)
{
	int	length;
	while (*str)
	{
		length++;
		str++;
	}
	return (length);
}

int	main(void)
{
	ft_strlen("hello puppy");
	return (0);
}