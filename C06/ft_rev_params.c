#include <unistd.h>

int	main(int argc, char **argv)
{
	int	idx;
	int	adr;

	adr = argc;
	while (--adr > 0)
	{
		idx = -1;
		while (argv[adr][++idx])
			write(1, &argv[adr][idx], 1);
		write(1, "\n", 1);
	}
	return (0);
}