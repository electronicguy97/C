char	*ft_strlowcase(char *str)
{
	int	len;

	len = -1;
	while (str[++len])
		if (str[len] >= 65 && str[len] <= 90)
			str[len] += 32;
	return (str);
}