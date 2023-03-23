// stringhe --> char a[ ]="ciao";
//                printf("%s", a);
//                scanf("%s", a);
#include <stdio.h>
int main ()
{
    char a[6]="ciao ";
    printf("%s", a);
    char b[]= "come ";
    printf("%s", b);
    char *c= "stai?"; 
    printf("%s", c);
}