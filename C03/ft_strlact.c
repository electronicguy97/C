unsigned int	ft_strlen(char *str)
{
	unsigned int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	len;
	unsigned int	dest_len;
	unsigned int	src_len;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	len = 0;
	while (*dest)
	{
		dest++;
		len++;
	}
	while (*src && len + 1 < size)
	{
		*dest = *src;
		dest++;
		src++;
		len++;
	}
	*dest = 0;
	if (dest_len > size)
		return (src_len + size);
	else
		return (src_len + dest_len);
}