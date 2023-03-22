#include <stdio.h>

int main()
{
    int x;
    int y;
    int z;
    int f;
    int media;
  
    z=0;
    printf("inserisci un numero positivo");
    scanf("%d", &x);
    f= x;

    while(x>0)
   {
    printf("inserisci un numero");
    scanf("%d",&y);
    z=z+y;
    x=x-1;
   }

   printf("la somma di tutti numeri che ho inserito è %d\n", z);
   media= z/f;
   printf("la media dei numeri è %d\n", media);
     
   printf("la somma di tutti i numeri che ho inserito %d\n", z);
}