#include<stdio.h>
int main(void){
    int a,b;
    double r1, r2,r3,r4, r5;
    printf("Donner une valeur a a : \n");
    scanf("%f", &a);
    printf("Donner une valeur a b : \n");
    scanf("%f", &b);
    r1 = a + b;
    printf(" a + b = %lf \n",r1);
    r2 = a - b;
    printf(" a - b = %lf \n", r2);
    r3 = a * b;
    printf(" a * b = %lf \n", r3);
    r4 = a / b;
    printf(" a / b = %lf \n", r4);
    r5 = a % b;
    printf("a%%b = %lf \n", r5);

    return 0;



}
