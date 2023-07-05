char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	len_i;
	unsigned int	len_j;

	if (nb > 0)
	{
		len_i = 0;
		len_j = 0;
		while (dest[len_j])
			len_j++;
		while (src[len_i] && len_i < nb)
		{
			dest[len_i + len_j] = src[len_i];
			len_i++;
		}
	}
	return (dest);
}