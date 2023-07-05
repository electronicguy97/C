#include <unistd.h>

void ft_putstr(char *str)
{
    int len;

    len = -1;
    while(str[++len])
        write(1, &str[len], 1);
}