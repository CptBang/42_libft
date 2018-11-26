int     ft_atoi(char *strnum)
{
    int     i;
    int     num;
    int     sign;

    i = 0;
    num = 0;
    sign = 1;
    while (strnum[i] == ' ' || (strnum[i] > 8 && strnum[i] < 14))
        i++;
    if (strnum[i] == '-' || strnum[i] == '+')
    {
        if (strnum[i] == '-')
            sign = -1;
        i++;
    }
    while (strnum[i] != 0 && (strnum[i] >= '0' && strnum[i] <= '9'))
    {
        num *= 10;
        num += (strnum[i] - '0') % 10;
        i++;
    }
    return (sign * num);
}