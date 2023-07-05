char	*ft_strcpy(char *dest, char *src)
{
	int	len;

	len = -1;
	while (src[++len])
		dest[len] = src[len];
	dest[len] = '\0';
	return (dest);
}