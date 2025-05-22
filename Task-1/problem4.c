/*This program checks a number even or odd */

#include<stdio.h>
int main()
{
    int num;
    printf("Enter an integer number: ");
    scanf("%d", &num);
    if ((num % 2) == 0)
    {
        printf("The entered number %d is an even number.", num);
    }
    else {
        printf("The entered number %d is an odd number.", num);
    }

    return 0;
    
}