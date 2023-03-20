#include <stdio.h>

int main()
{
    float x;
    float K;
    float F;
    printf("inserisci una temperatura in celsius");
    scanf("%f", &x);
    printf("x: %f\n", x);

    if(x<-273.15)
    {
        printf("errore");
    }
    else
   { K = x + 273,15;
    printf("nuova temperatura è : %f\n", K);

    F = (9/5)*x + 32;
    printf("nuova temperatura è : %f\n", F);} 
}