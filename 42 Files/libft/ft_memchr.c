#include <string.h>

void    *ft_memchr(void *ptr, int value, size_t num)
{
    unsigned char   *ptr1;
    unsigned char   value1;
    //size_t          i;

    ptr1 = ptr;
    value1 = value;
    //i = 0;
    while (num > 0)
    {
        if (*ptr1 == value1)
            return (ptr1);
        ptr1++;
        num--;
    }
    return (0);
}