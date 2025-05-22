/*This program calculates total electricity bill */

#include<stdio.h>
int main()
{
    float unit , bill1, bill2, bill3 , total;
    printf("Enter total used electricity in unit charge:");
    scanf("%f", &unit);
    if(unit > 0 && unit <= 50){
        bill1 = unit * 0.50; 
        total = bill1 + bill1 * .20; 
        printf("%.2f", total); 
    }
    else if (unit >50 && unit <=150){
        bill1 = 50 * 0.50; 
        bill2 = bill1 + (unit - 50)*.75;
        total = bill2 + bill2 * .20;
        printf("%.2f", total);
    }       
    else if (unit >150 && unit <=250){
        bill1 = 50 * .50;
        bill2 = 100 * .75;
        bill3 = bill1 + bill2 + (unit - 150) * 1.20;
        total = bill3 + bill3 * .20;
        printf("%.2f", total);
    }
    else{
        bill1 = unit * 1.50;
        total = bill1 + bill1 * .20;
        printf("%.2f", total);
    }

    return 0;
}