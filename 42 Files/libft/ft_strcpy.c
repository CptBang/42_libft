char    *ft_strcpy(char *cpy, char *str)
{
    int     i;

    i = 0;
    while (str[i] != 0)
    {
        cpy[i] = str[i];
        i++;
    }
    cpy[i] = 0;
    return (cpy);
}