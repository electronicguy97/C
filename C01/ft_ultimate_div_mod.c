void ft_ultimatet_div_mod (int *a, int *b)
{
    int calc_a;
    int calc_b;

    calc_a = *a / *b;
    calc_b = *a % *b;

    *a = calc_a;
    *b = calc_b;
}