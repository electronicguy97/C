char	*ft_strupcase(char *str)
{
	int	len;

	len = -1;
	while (str[++len])
		if (str[len] >= 97 && str[len] <= 122)
			str[len] -= 32;
	return (str);
}