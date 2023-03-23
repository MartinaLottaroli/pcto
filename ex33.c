#include <stdio.h>

int main()
{
    int i = 0;
    char a[] = "Ciao";
    while(a[i] != 0)
    {
        i = i + 1;
    }
    printf("La parola %s è composta da %d lettere\n", a, i);
}