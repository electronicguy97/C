int	ft_str_is_printable(char *str)
{
	if (!(*str))
		return (1);
	while (*str)
	{
		if (126 < *str || *str < 32)
			return (0);
		str++;
	}
	return (1);
}