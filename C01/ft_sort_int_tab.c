void ft_sort_int_tab(int *tab, int size)
{
    int len_i;
    int len_j;
    int temp;
    int flag;

    len_i = 0;
    while(len_i != size)
    {
        len_j = 0;
        flag = 0;
        while(len_j != size - 1 - len_i)
        {
            if(tab[len_j] > tab[len_j+1])
            {
                temp = tab[len_j];
                tab[len_j] = tab[len_j+1];
                tab[len_j+1] = temp;
                flag = 1;
            }
            len_j++;
        }
        len_i++;
        if(flag == 0)
            break;
    }
}