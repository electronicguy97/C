int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	len;

	if (n > 0)
	{
		len = 0;
		while ((s1[len] || s2[len]) && len < n)
		{
			if (s1[len] > s2[len])
				return (s1[len] - s2[len]);
			else if (s1[len] < s2[len])
				return (s1[len] - s2[len]);
			len++;
		}
	}
	return (0);
}