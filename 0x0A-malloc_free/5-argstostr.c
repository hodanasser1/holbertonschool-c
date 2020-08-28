#include "holberton.h"

#include <stdio.h>
#include <unistd.h>

char *argstostr(int ac, char **av)
{

  int i;
  for (i = 0; i < ac; i++)
  {
     printf("%s\n", av[i]);
  }
  return 0;
}
