#include <stdio.h>
 
 int main()
 {
    int x;
    printf("inserisci un età");
    scanf("%d", &x);

    if(x>18)
    {
        printf("sei maggiorenne");
    }
    else
    {
        printf("sei minorenne");
    }
 }