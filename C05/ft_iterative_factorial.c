int	ft_iterative_factorial(int nb)
{
	int	calc_nb;

	if (nb < 0)
		return (0);
	if (!nb)
		return (1);
	calc_nb = nb;
	while (--nb > 0)
		calc_nb *= nb;
	return (calc_nb);
}