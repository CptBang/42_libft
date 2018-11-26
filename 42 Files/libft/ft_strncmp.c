#include <string.h>

int     ft_strncmp(char *str1, char *str2, size_t num)
{
    int     i;

    i = 0;
    while (*str1 == *str2 && *str1 != 0 && *str2 != 0 && i < 0)
    {
        str1++;
        str2++;
    }
    return(*str1 - *str2);
}