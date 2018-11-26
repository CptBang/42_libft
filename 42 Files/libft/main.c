#include <stdio.h>
#include <string.h>

void    ft_bzero(void *ptr, size_t num);
void    *ft_memset(void *ptr, int replace, size_t num);

#include <stdio.h>
#include <string.h>

int main ()
{
  char str[] = "almost every programmer should know memset!";
  ft_memset (str,0,6);
  puts (str);
  return 0;
}