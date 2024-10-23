#include <stdio.h>
#include <math.h>
int main (void)
{   float principle;
    printf("Enter the main amount of money in Dollars:");
    scanf("%f",&principle);
    float rate;
    printf("Enter the rate of interest:");
    scanf("%f",&rate);
    float time;
    printf("Enter the year:");
    scanf("%f",&time);
    float interest;
    float total;
    total=principle* powf(1+rate,time);
    interest=total-principle;
    printf("The amount of interest is %.2f$\n",interest);
    printf("The total amount of money is %.2f$",total);
    return 0;
}