#include <stdio.h>

int main()
{
    char a;
    printf("Saisir un caractère:      \n");
    scanf("%c", &a);
    switch(a){
        case 'a':
        printf("la lettre est une voyelle");
        break;
        case 'y':
        printf("la lettre est une voyelle");
        break;
        case 'e':
        printf("la lettre est une voyelle");
        break;
        case 'o':
        printf("la lettre est une voyelle");
        break;
        case 'u':
        printf("la lettre est une voyelle");
        break;
        default:
        printf("a est constant ");
    }
}
