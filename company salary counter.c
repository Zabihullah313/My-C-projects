#include<stdio.h>
int main()
{
    float sales;
    float salary=200;
    float extra;
    float total;
    while(1)
    {
        printf("Enter sales in dollars (-1 to end) :");
        scanf("%f",&sales);
        if (sales==-1)
            break;
        else if (sales<0)
            continue;
        else {
            extra = sales * 9 / 100;
            total=extra+salary;
            printf("salary is %.2f$\n",total);
        }
    }
}