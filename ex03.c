// inserisci due numeri e fanne la somma, sottrazione, moltiplicazione e resto

#include <stdio.h>
int main()
{
    int a;
    int b;
    
    printf("inserisci due numeri: ");
    scanf("%d %d", &a, &b);
    int c = a + b;
    printf("somma: %d\n", c);

    int d = a - b;
    printf("differenza: %d\n", d);

    int e = a * b;
    printf("prodotto: %d\n", e);

    int f = a/b;
    printf("divisione: %d\n", f);

    int g = a%b;
    printf("resto: %d\n", g);
}