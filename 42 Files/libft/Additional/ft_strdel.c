#include <stdlib.h>
#include <string.h>

void    ft_strdel(char *s)
{
    free(s);
    *s = NULL;
}