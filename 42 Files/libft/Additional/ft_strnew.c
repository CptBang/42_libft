#include <string.h>
#include <stdlib.h>

char    *ft_strnew(size_t size)
{
    char    *str;

    str = (char *) malloc(size * sizeof(*str));
    *str = '\0';
    return (str);
}