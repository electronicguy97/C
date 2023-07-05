int	ft_str_is_numeric(char *str)
{
	if (!(*str))
		return (1);
	while (*str)
	{
		if (*str < 48 || 57 < *str)
			return (0);
		str++;
	}
	return (1);
}