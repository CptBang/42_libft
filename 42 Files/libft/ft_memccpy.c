#include <string.h>

void    *ft_memccpy(void *cpy, void *str, int character, size_t num)
{
    unsigned char   *arr1;
    unsigned char   *arr2;
    size_t          i;

    arr1 = cpy;
    arr2 = str;
    i = 0;
    while (i < num)
    {
        arr1[i] = arr2[i];
        if (arr1[i] == character)
            return(arr1 + 1);
        i++;
    }
    return(arr1);
}