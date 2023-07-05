int	ft_iterative_power(int nb, int power)
{
	int	calc_nb;

	calc_nb = nb;
	if (nb >= 0 && power == 0)
		return (1);
	if (power < 0)
		return (0);
	if (nb > 0 && power > 0)
	{
		while (--power > 0)
			calc_nb *= nb;
		return (calc_nb);
	}
	return (0);
}