#include <unistd.h>

void	fr_print_reverse_alphabet(void)
{
	int	ascii;

	ascii = 123;
	while ((ascii--) != 97)
		write(1, &ascii, 1);
}