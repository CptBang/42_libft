#include <stdio.h>

int     ft_strlen(char *str);

int     ft_strlcat(char *dest, char *src, size_t num)
{
    int     i;
    int     end;

    i = 0;
    end = ft_strlen(dest);
    while (src[i] != 0 && end < num - 1)
    {
        dest[end] = src[i];
        i++;
        end++;
    }
    dest[end] = 0;
    return (end);
}