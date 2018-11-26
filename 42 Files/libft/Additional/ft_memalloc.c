#include <string.h>
#include <stdlib.h>

void    *ft_memalloc(size_t size)
{
    void    *mem;

    mem = (void *) malloc(size * sizeof(*mem));
    return (mem);
}