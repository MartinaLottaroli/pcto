#include <stdio.h>

int main ()
{
    int x; 
    int y;
    int z;

    printf("inserisci un numero");
    scanf("%d %d %d", &x, &y, &z);

    if(x+y>z && x+z>y && z+y>z)
    {
        printf("i lati fanno parte di un triangolo");
    }

    else
    {
        printf("i lati non fanno parte di un triangolo");
    }

    }