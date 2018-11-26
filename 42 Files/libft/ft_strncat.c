#include <stdio.h>
#include <string.h>

int     ft_strlen(char *str);

char    *ft_strncat(char *dest, char *src, size_t num)
{
    int     i;
    int     end;

    i = 0;
    end = ft_strlen(dest);
    while (src[i] != 0 && i < num)
    {
        dest[end] = src[i];
        i++;
        end++;
    }
    dest[end] = 0;
    return (dest);
}