#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int		adr;

	adr = -1;
	while (s1[++adr])
		if (s1[adr] != s2[adr])
			return (s1[adr] - s2[adr]);
	if (!s2[adr])
		return (0);
	else
		return (-s2[adr]);
}

void	ft_bubble_sort(int argc, char **argv)
{
	int		adr;
	int		adr_c;
	char	*temp;

	adr = 0;
	while (++adr < argc)
	{
		adr_c = adr;
		while (++adr_c < argc)
		{
			if (ft_strcmp(argv[adr], argv[adr_c]) > 0)
			{
				temp = argv[adr];
				argv[adr] = argv[adr_c];
				argv[adr_c] = temp;
			}
		}
	}
}

int	main(int argc, char **argv)
{
	int	adr;

	adr = 0;
	while (++adr < argc)
	{
		ft_bubble_sort(argc, argv);
		ft_putstr(argv[adr]);
		write(1, "\n", 1);
	}
	return (0);
}