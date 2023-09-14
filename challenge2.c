#include<stdio.h>
int main(void){
    int F, result1, num,c;
    float n = 1.8;
    // E with accent is a unicode that's why i used u00E9
    printf("Entrer la temp\u00E9rature en Fahrenheit :  \n");
    scanf("%d", &F);
    //C = (F-32)/1.8
    num = 32;
    result1 = F - num;
    c = result1 / n;
    if(c <= 0){
        printf("tr\u00E8s froid");
    }
    if (c >= 1 && c < 20){
        printf("froid");
    }
    if ( c >= 20 && c<= 30)
    {
        printf("chaud");
    }
    if ( c > 30){
        printf("tr\u00E8s chaud");
    }
    return 0;

}
