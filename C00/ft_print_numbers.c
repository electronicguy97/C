#include <unistd.h>

void	ft_print_numbers(void)
{
	int	ascii;

	ascii = 47;
	while (ascii++ != 57)
		write(1, &ascii, 1);
}