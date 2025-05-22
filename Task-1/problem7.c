/*This program find all roots of a quadratic equation */

#include<stdio.h>
#include<math.h>
int main()
{
    int a, b, c;
    float x1, x2;
    printf("Standard quadratic equation is ax^2 + bx + c = 0 \n");
    printf("compare with the standard form and input the value of a , b, c\n");

    printf("value of a:");
    scanf("%d", &a);

    printf("value of b:");
    scanf("%d", &b);

    printf("value of c:");
    scanf("%d", &c);

    x1 = ((-b + sqrt(b*b - 4*a*c))/ 2*a);
    x2 = ((-b - sqrt(b*b - 4*a*c))/ 2*a);
    printf("all the root of the equation: x1 = %.2f , x2 = %.2f ", x1, x2);

    return 0;
}