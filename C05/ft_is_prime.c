int	ft_is_prime(int nb)
{
	int	search;

	search = 1;
	while (++search < nb)
		if (nb % search == 0)
			return (0);
	if (nb == search)
		return (1);
	return (0);
}