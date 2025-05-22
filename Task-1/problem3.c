/*This program converts days into years months weeks*/

#include<stdio.h>
int main()
{
    int days , years , months , weeks , remaining_days = 0 ; 
    printf("Enter the number of days to convert:\n");
    scanf("%d", &days);
    months = days / 30;
    weeks = days / 7 ;
    years = days / 365;
    if (days % 365 == 0)
        remaining_days = 0;
    else
        remaining_days = days % 365;
    printf("%d days is equal to %d years \n", days, years);
    printf("%d days is equal to %d months \n", days , months);
    printf("%d days is equal to %d weeks \n" , days , weeks);
    printf("%d days is equal to %d years %d months %d weeks %d days \n" , days, years , months , weeks , remaining_days);

    return 0;
}