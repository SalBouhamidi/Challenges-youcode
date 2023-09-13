#include<stdio.h>
int main(void){
    int F, result1, num,c;
    float n = 1.8;
    printf("Entrer la température en Fahrenheit :  \n");
    scanf("%d", &F);
    //C = (F-32)/1.8
    num = 32;
    result1 = F - num;
    c = result1 / n;
    if(c <= 0){
        printf("très froid");
    }
    if (c >= 1 && c < 20){
        printf("froid");
    }
    if ( c >= 20 && c<= 30)
    {
        printf("chaud");
    }
    if ( c > 30){
        printf("très chaud");
    }

    return 0;

}
