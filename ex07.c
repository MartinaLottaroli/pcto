#include <stdio.h>

int main()
{
    int x;
    int y;
    printf("inserisci due numeri");
    scanf("%d %d", &x, &y);

    if(x%y==0)
    {
        printf("x è multiplo di y");
    }

    else 
    {
        printf("x non è multiplo di y");
    }

}