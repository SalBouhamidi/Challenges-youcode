#include <stdio.h>
int main(){
    int a, b, c, d;
    int somme, moyenne;
    //number 1
    printf("Taper le premier nombre: ", a);
    scanf("%d", &a);
    //number 2
    printf("Taper le 2eme nombre: ", b);
    scanf("%d", &b);
    // number 3
    printf("Taper le 3eme nombre: ", c);
    scanf("%d", &c);
    // number 4
    printf("Taper le 4eme nombre: ", d);
    scanf("%d", &d);
    somme = a + b + c + d;
    printf("la somme de a + b + c + d est egale %d\n", somme);
    moyenne = somme / 4;
    printf("la moyenne est egale : %d ", moyenne);
    return 0;
}