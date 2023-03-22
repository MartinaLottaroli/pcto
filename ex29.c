#include <stdio.h>

int main ()
{
  int a[5];
  int i=0;
  while(i<6)
  {
    a[i]=i*2;
    printf("%d= %d\n", i, a[i]);
    i++;
  } 
}
