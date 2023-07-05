#include <unistd.h>

void	ft_is_negative(int n)
{
	char	flag;

	if (n < 0)
		flag = 'N';
	else
		flag = 'P';
	write(1, &flag, 1);
}