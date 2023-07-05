int	ft_recursive_factorial(int nb)
{
	if (!nb || nb == 1)
		return (1);
	if (nb < 0)
		return (0);
	return ((ft_recursive_factorial(nb - 1) * nb));
}