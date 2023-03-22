#include <stdio.h>

char parametro(char a)
{
  if(a>=65 && a<=90)
  {
    a= a+32;
  }

  else if(a>=97 && a<=122)
  {
    a=a-32;
  }

  else
  {
    int a;
  }
   return(a);
}

char main()
{
    char x;
    printf("inserire una lettera ");
    scanf("%c", &x);
    char f = parametro(x); 
    printf("la lettera finale è %c", f);
}