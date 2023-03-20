#include <stdio.h>

int main()
{
    int a;
    printf("inserisci un numero e stampa");
    scanf("%d", &a);
    a = a + 7;
    printf("nuova variabile +: %d\n", a);
    a = a -7;
    printf("nuova variabile -: %d\n", a);
    a = a*7;
    printf("nuova variabile *: %d\n", a);
    a = a/7;
    printf("nuova variabile /: %d\n", a);
    a = a%7;
    printf("nuova variabile r:%d\n", a);
}