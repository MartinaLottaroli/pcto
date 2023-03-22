#include <stdio.h>

int main()
{
    int x;
    int y;
    int z;
  
    z=0;
    printf("inserisci un numero positivo");
    scanf("%d", &x);

    while(x>0)
   {
    printf("inserisci un numero");
    scanf("%d",&y);
    z=z+y;
    x=x-1;
   }
     
    printf("la somma di tutti i numeri che ho inserito %d\n", z);
}