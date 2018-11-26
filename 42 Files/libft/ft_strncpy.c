#include <string.h>

char    *ft_strncpy(char *cpy, char *str, size_t num)
{
    int     i;

    i = 0;
    while (str[i] != 0 && i < num)
    {
        cpy[i] = str[i];
        i++;
    }
    while (i < num)
    {
        cpy[i] = 0;
        i++;
    }
    return (cpy);
}