#include <stdlib.h>

char    *ft_strdup(char *str)
{
    int     i;
    char    *cpy;

    i = 0;
    while (str[i] != 0)
        i++;
    cpy = (char*) malloc(sizeof(char*) * i);
    i = 0;
    while (str[i] != 0)
    {
        cpy[i] = str[i];
        i++;
    }
    cpy[i] = 0;
    return (cpy);
}