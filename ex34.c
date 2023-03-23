#include <stdio.h>
int unicorno(char *a)
{
    int i = 0;
    while(a[i] != 0)
    {
        i = i + 1;
    }
    return(i);
}
int main()
{
    int k;
    char a[] = "fatato";
    k = unicorno (a);
    printf("La parola %s è composta da %d lettere\n", a, k);
}