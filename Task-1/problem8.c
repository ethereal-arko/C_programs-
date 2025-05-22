/*This program check a number is even or odd and also divisible by 5 */

#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d", &num);
    if ((num % 2) == 0 )
    {   
        if ((num % 5) == 0)
        {
            printf("The entered number %d is an even number and divisible by 5.", num);
        }
        else{
        printf("The entered number %d is an even number and not divisible by 5.", num);
        }
    }
    else {
        if ((num % 5) == 0)
        {
            printf("The entered number %d is an odd number and divisible by 5.", num);
        }
        else{
        printf("The entered number %d is an odd number and not divisible by 5.", num);
        }
    }

    return 0;

}