/*This program finds the diameter, area and the circumference of a circle*/

#include<stdio.h>
int main()
{
    int radius;
    float area , circumference , diameter;
    const float Pi = 3.1416 ;
    printf("Enter the radius of a circle:\n");
    scanf("%d", &radius);
    diameter = radius * 2;
    area = Pi * radius * radius;
    circumference = 2 * Pi * radius;
    printf("Diameter of the circle is %.2f\n", diameter);
    printf("Area of the circle is %.2f\n", area);
    printf("Circumference of the circle is %.2f\n", circumference);

    return 0;

}