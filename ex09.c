#include <stdio.h>

int main()
{
    int x;
    int y;
    int z;
    printf("inserisci tre numeri");
    scanf("%d %d %d", &x, &y, &z);

    if(x-y==y-z)
    {
        printf("sono in progressione aritmetica");
    }

    else
    {
        printf("non sono in progressione aritmetica");
    }
}