#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print(int mode, int fnum, int lnum)
{
	ft_putchar(fnum / 10 + 48);
	ft_putchar(fnum % 10 + 48);
	ft_putchar(' ');
	ft_putchar(lnum / 10 +48);
	ft_putchar(lnum % 10 + 48);
	if (mode)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int	num;
	int	snum;

	num = 0;
	while (num != 99)
	{
		while (snum != 99)
		{
			snum++;
			if (num < snum && num != 98)
				print(1, num, snum);
		}
		snum = 0;
		num = num + 1;
	}
	print(0, 98, 99);
}