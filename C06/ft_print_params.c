#include <unistd.h>

int	main(int argc, char **argv)
{
	int	idx;
	int	adr;

	adr = 0;
	while (++adr < argc)
	{
		idx = -1;
		while (argv[adr][++idx])
			write(1, &argv[adr][idx], 1);
		write(1, "\n", 1);
	}
	return (0);
}