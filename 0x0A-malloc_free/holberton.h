#ifndef HOLBERTON
#define HOLBERTON
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int _strlen_recursion(char *s);
char *create_array(unsigned int size, char c);
uint64_t recLen(char *str);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
char *argstostr(int ac, char **av);

#endif
