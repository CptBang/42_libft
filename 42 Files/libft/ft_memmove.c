#include <string.h>

void    *ft_memmove (void *cpy, void *str, size_t num)
{
    unsigned char   *arr1;
    unsigned char   *arr2;
    unsigned char   temp[num];
    size_t          i;

    arr1 = cpy;
    arr2 = str;
    i = 0;
    while (i < num)
    {
        temp[i] = arr2[i];
        i++;
    }

    i = 0;
    while (i < num)
    {
        arr1[i] = temp[i];
        i++;
    }
    return(cpy);
}