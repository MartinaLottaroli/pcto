#include <stdio.h>

int fattoriale (int x)
{
    int y=1;

   while(x>1)
    {
        y= x*y;
        x= x-1;
    }
   return(y);
}

int main()
{
    int x;
    printf("utente inserisci un numero");
    scanf("%d", &x);
    int f = fattoriale(x); 
    printf("il fattore fattoriale è %d", f);
}