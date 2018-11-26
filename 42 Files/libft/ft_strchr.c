char    *ft_strchr(char *str, int character)
{
    while (*str != 0)
    {
        if (*str == character)
            return (str);
        str++;
    }

    if (*str == character)      //if character is equal to NULL
        return (str);
    return (0);
}