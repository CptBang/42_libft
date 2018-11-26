#include <stdio.h>

int     ft_memcmp(void *ptr1, void *ptr2, size_t num)
{
    unsigned char   *str1;
    unsigned char   *str2;

    str1 = ptr1;
    str2 = ptr2;
    while (str1 == str2 && num > 0)
    {
        str1++;
        str2++;
        num--;
    }
    return (str1 - str2);
}