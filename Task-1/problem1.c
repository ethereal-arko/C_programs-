/*This program finds the area and perimeter of a rectangle*/

#include<stdio.h>
int main()
{
    int side1 , side2, area, perimeter;
    printf("Enter the sides of a rectange:\n");
    scanf("%d\n", &side1);
    scanf("%d", &side2);
    area = side1 * side2 ;
    perimeter = 2 * (side1 + side2);
    printf("Area of the rectangle is %d \n" , area);
    printf("Perimeter of the rectangle is %d" , perimeter);

    return 0;

}