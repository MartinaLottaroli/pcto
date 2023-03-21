#include <stdio.h>

int main ()
{
    int x;
    int y;
    int z;
    

    printf("inserisci un anno di nascita");
    scanf("%d", &x);
    
    if(x>1969)
    {
        int y= x-1969;
        printf("sei nato %d anni dopo lo sbarco sulla luna", y);
        
    }

    else if(x<1969)
    {
       int z=1969-x;
        printf("sei nato %d anni prima dello sbarco sulla luna", z);
        
    }

    else
    {
        printf("l'uomo è nato lo stesso anno dello sbarco sulla luna\n");
    }

    }