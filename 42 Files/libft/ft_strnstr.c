#include <string.h>

char    *ft_strnstr(char *str1, char *str2, size_t num)
{
    int     i;
    char    *temp;

    while (*str1 != 0)
    {
        i = 0;
        if (*str1 == str2[i])
        {
            temp = str1;
            while (*temp == str2[i] && str2[i] != 0 && i < num)
            {
                temp++;
                i++;
            }

            if (str2[i] == 0 || i == num)
                return (str1);
        }
        str1++;
    }
    return (0);
}