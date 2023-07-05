char	*ft_strcat(char *dest, char *src)
{
	int	len_i;
	int	len_j;

	len_i = -1;
	len_j = 0;
	while (dest[len_j])
		len_j++;
	while (src[++len_i])
		dest[len_i + len_j] = src[len_i];
	return (dest);
}