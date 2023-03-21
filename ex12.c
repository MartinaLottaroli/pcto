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
        if((x==y && z!=x) || (y==z && y!=x) || (x==z && z!=y))
    {
        printf("il triangolo è isoscele");
    }
    else if(x==y && y == x && z==y)
    {
        printf("il triangolo è equilatero");
    }
    else
    {
        printf("il triangolo è scaleno");
    }

    }
    

    else
    {
        printf("i lati non fanno parte di un triangolo");
    }



}