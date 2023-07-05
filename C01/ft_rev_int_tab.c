void    ft_rev_int_tab(int *tab, int size)
{
    int len;
    int temp;

    len = 0;
    temp = 0;
    while(len != size / 2)
    {
        temp = tab[len];
        tab[len] = tab[size - len - 1];
        tab[size - len - 1] = temp;
        len++;
    }
}