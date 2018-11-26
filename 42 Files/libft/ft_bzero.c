#include <string.h>

void    *ft_memset(void *ptr, int replace, size_t num);

void    ft_bzero(void *ptr, size_t num)
{
    ft_memset(ptr, 0, num);
}