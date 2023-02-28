#include 'main.h'
/**
  main -swap valuses
  a -is the firas tvalue
  b - is the second value
  */

void swap_int(int *a, int *b)
{
	int i = *a;
	*a = *b;
	*b = i;
}
