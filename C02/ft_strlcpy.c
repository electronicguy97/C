unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	len;

	len = 0;
	while (src[len] && (len + 1 < size))
	{
		dest[len] = src[len];
		len++;
	}
	if (size != 0)
		dest[len] = '\0';
	len = 0;
	while (src[len])
		len++;
	return (len);
}