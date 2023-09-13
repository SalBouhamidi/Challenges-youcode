task 1: 
#include <stdio.h>
int main (void){
    char name[10];
    char pre[15];
    int age;
    char sexe[10];
    int num;
    printf("Entrer votre Nom : \n");
    scanf("%s", &name);
    printf("Entrer votre prénom : \n");
    scanf("%s", &pre);
    printf("Entrer vote age : \n");
    scanf("%d", &age);
    printf("Entrer votre sexe : \n");
    scanf("%s", &sexe);
    printf("Entrer votre numéro de téléphone : +212 \n");
    scanf ("%u", &num);
    printf("votre nom est %s\n", name);
    printf("votre prénom est %s\n", pre);
    printf("votre age est %d\n", age);
    printf("votre sexe est %s\n", sexe);
    printf("votre numéro de télephone est: %u", num);
    return 0;
}



task2: 
