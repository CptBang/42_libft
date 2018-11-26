#include <string.h>

void    *ft_memset(void *ptr, int replace, size_t num)
{
  unsigned char *arr;

  arr = ptr;
  while (num > 0)
  {
    *arr = replace;
    arr++;
    num--;
  }
  return (ptr);
}