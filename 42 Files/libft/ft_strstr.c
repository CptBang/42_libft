char    *ft_strstr(char *str1, char *str2)
{
    int     i;
    char    *temp;

    while (*str1 != 0)
    {
        i = 0;
        if (*str1 == str2[i])
        {
            temp = str1;
            while (*temp == str2[i] && str2[i] != 0)
            {
                temp++;
                i++;
            }

            if (str2[i] == 0)
                return (str1);
        }
        str1++;
    }
    return (0);
}