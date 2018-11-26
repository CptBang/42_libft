#include <string.h>

void    *ft_memcpy(void *cpy, void *str, size_t num)
{
    unsigned char   *arr1;
    unsigned char   *arr2;
    size_t          i;

    arr1 = cpy;     //why typescast here?
    arr2 = str;
    i = 0;
    while (i < num)
    {
        arr1[i] = arr2[i];
        i++;
    }
    return(cpy);
}