int	ft_str_is_lowercase(char *str)
{
	if (!(*str))
		return (1);
	while (*str)
	{
		if (*str < 97 || 123 < *str)
			return (0);
		str++;
	}
	return (1);
}