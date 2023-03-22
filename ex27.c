#include <stdio.h>

int check (int n)
{
  if(n<0)
  {
    n= n* (-1);
  }
   return(n);
}

int main()
{
    int x;
    printf("inserire un numero");
    scanf("%d", &x);
    int f = check(x); 
    printf("il valore finale è %d", f);
}