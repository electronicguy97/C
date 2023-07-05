#include <stdio.h>

int integer_translater(char *str, int num_space)
{
    int num;
    int ascii_int_gap;

    num = 0;
    ascii_int_gap = 48;
    while(str[num_space])
    {
        num = num * 10 + str[num_space] - ascii_int_gap;
        //printf("ns = %d | str = %c | num = %d\n",num_space,str[num_space],num);
        if(!(str[num_space + 1] >= 48 && str[num_space + 1] <= 57))
            return (num);
        num_space++;
    }
    return (0);
}

int where_is_num(char *str)
{
    int len;

    len = -1;
    while(str[++len])
        if(str[len + 1] > 48 && str[len + 1] < 57)
            return (len + 1);
	return (0);
}

int minus_counter(char *str)
{
    int len;
    int count;

    len = -1;
    count = 0;
    while(str[++len])
        if (str[len] >= 48 && str[len] <= 57)
            return count;
        else if(str[len] == 45)
            count++;
    return count;
}

int sign_choicer(int num, int minus_count)
{
	if(minus_count % 2)
        return (num * (-1));
    else
        return (num * (1));
}

int blank_counter(char *str)
{
    int len;
    int counter;

    len = -1;
    counter = 0;
    while(str[++len])
    {
        if(str[len] == 32 && str[len + 1] != 32)
            counter++;
        if(str[len + 1] >= 48 && str[len + 1] <= 57)
            break;
    }
    return (counter);
}

int ft_atoi(char *str)
{
    int num;

    printf("bc = %d\n",blank_counter(str));
    //printf("wn = %d\n",where_is_num(str));
    num = integer_translater(str, where_is_num(str));
    //printf("num1 = %d\n",num);
    num = sign_choicer(num, minus_counter(str));
    if(blank_counter(str) != 2)
        return (num);
    else
        return (0);
}

int main(void)
{
    char str1[] = "    --+--+--  2147483647";
    //char str2[] = "  f  -+-++--2147483648";
    //char str3[] = "    -+-++--21474 83648";

    printf("%d\n",ft_atoi(str1));
    //printf("%d\n",ft_atoi(str2));
    //printf("%d\n",ft_atoi(str3));
}