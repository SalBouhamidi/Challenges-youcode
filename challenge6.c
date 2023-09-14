#include <stdio.h>

int main()
{
    float r, c;
    printf("Entrer le rayon du cercle :  ");
    scanf("%f", &r);
    c = 2*r*3.14;
    printf("la circonf\u00E9rence d'un cercle de %f est %f", r, c);
    return(0);
}
