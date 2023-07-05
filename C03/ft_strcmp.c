int	ft_strcmp(char *s1, char *s2)
{
	int	len;

	len = 0;
	while (s1[len] || s2[len])
	{
		if (s1[len] > s2[len])
			return (s1[len] - s2[len]);
		else if (s1[len] < s2[len])
			return (s1[len] - s2[len]);
		len++;
	}
	return (0);
}