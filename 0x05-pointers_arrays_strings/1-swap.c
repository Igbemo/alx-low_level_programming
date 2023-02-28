#include "main.h"
/**
  main- swap values
  @a- is the ifrst values
  @b- is the second values
  int- is the type of value
  return- void
  */

void swap_int(int *a, int *b)
{
	int i = *a;
	*a = *b;
	*b = i;
}

