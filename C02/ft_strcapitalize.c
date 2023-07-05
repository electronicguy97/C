int	input(char target)
{
	if ((96 < target && target < 123) || (64 < target && target < 91))
		return (1);
	else if (47 < target && target < 58)
		return (1);
	else
		return (0);
}

char	up(char target)
{
	if (96 < target && target < 123)
		target -= 32;
	return (target);
}

char	low(char target)
{
	if (64 < target && target < 91)
		target += 32;
	return (target);
}

char	*ft_strcapitalize(char *str)
{
	int	len;

	len = -1;
	while (str[++len])
	{
		if (!(str[len]) || input(str[len - 1]))
			str[len] = low(str[len]);
		else
			str[len] = up(str[len]);
	}
	return (str);
}