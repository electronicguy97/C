int	ft_is_prime(int nb)
{
	int	search;

	search = 2;
	if (nb <= 1)
		return (0);
	while (search <= (nb / search))
	{
		if (nb % search == 0)
			return (0);
		search += 1;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (!ft_is_prime(nb))
		nb++;
	return (nb);
}