#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	int		len;
	char	*hex;

	hex = "0123456789abcdef";
	len = -1;
	while (str[++len])
	{
		if ((str[len] < 32 || str[len] > 126))
		{
			write(1, "\\", 1);
			write(1, &hex[(unsigned char)str[len] / 16], 1);
			write(1, &hex[(unsigned char)str[len] % 16], 1);
		}
		else
			write(1, &str[len], 1);
	}
}