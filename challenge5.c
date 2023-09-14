#include <stdio.h>
#include <math.h>

int main()
{
    int x1, y1, x2, y2;
    float r1;
    printf("Enter la cordonnée x1 du point M :  \n");
    scanf("%d", &x1);
    printf("Enter la cordonnée y1 du point M: \n");
    scanf("%d", &y1);
    printf("Enter la cordonnée x2 du point N: \n");
    scanf("%d", &x2);
    printf("Enter la cordonnée y2 du point N: \n");
    scanf("%d", &y2);
    //rslt = sqrt((x2-x1)² + (y2-y1)²);
    r1 = sqrt(pow(x2-x1, 2) + pow(y2-y1, 2));
    printf("la distance entre les deux points est %.2lf", r1);
    return 0;

}