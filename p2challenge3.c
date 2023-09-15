#include <stdio.h>

int main()
{
    int a, b ;
    printf(" Entrer le premier nombre: >  \n");
    scanf("%d", &a);
    printf("Entrer le 2eme nombre : >   \n");
    scanf("%d", &b);
    if (a != b )
        printf("%d + %d = %d", a, b, a+b);
    else
        printf("le triple de la somme est %d", (a +b)*3);

}
