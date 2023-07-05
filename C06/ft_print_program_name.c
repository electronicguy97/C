#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	idx;

	idx = -1;
	if (argc)
		while (argv[0][++idx])
			write(1, &argv[0][idx], 1);
	write(1, "\n", 1);
	return (0);
}