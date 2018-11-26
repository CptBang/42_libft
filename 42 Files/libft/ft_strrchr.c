char    *ft_strrchr(char *str, int character)
{
    while (*str != 0)
        str++;

    if (*str == character)      //if character is equal to NULL
        return (str);

    while (*str != str[0])
    {
        if (*str == character)
            return (str);
        str--;
    } 
    return (0);
}