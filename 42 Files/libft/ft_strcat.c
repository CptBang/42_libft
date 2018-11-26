#include <stdio.h>

int     ft_strlen(char *str);

char    *ft_strcat(char *dest, char *src)
{
    int     i;
    int     end;

    i = 0;
    end = ft_strlen(dest);
    while (src[i] != 0)
    {
        dest[end] = src[i];
        i++;
        end++;
    }
    dest[end] = 0;
    return (dest);
}