int	ft_str_is_alpha(char *str)
{
	if (!(*str))
		return (1);
	while (*str)
	{
		if (*str < 65 || (90 < *str && *str < 97) || 122 < *str)
			return (0);
		str++;
	}
	return (1);
}