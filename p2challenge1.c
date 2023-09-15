#include <stdio.h>

int main()
{
    int a;
    printf("Donne une valeur a  "a":      \n");
    scanf("%d", &a);
    switch(a%2 == 0){
        case 1:
        printf("ce nombre est paire");
        break;
        case 0:
        printf("ce nombre est impaire ");
    }
}
