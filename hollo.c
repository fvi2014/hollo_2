
#include <stdio.h>

int main (void)
{
  puts ("Vvedite temperaturu");

  float c, f, k;
  scanf ("%f", &c);
  f = c*9/5+32;
  printf ("%10.2f%s\n", f, "F");

  return 0;
}