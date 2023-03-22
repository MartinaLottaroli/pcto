#include <stdio.h>

int main()
{
    int x=0;
    int y=0;
    int z=0;
    int m;
    
    while(y>=0)
   {
    printf("inserisci un numero");
    scanf("%d",&y);
    z=z+y;
    x=x+1;
    m = z/x;
    printf("la media dei numeri è %d\n", m);
   }

}