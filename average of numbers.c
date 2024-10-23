#include<stdio.h>
int main()
{
    int num;
    printf("How many number you want to enter?\n");
    scanf("%d",&num);
    double sum=0.0;
    for (int i=1;i<=num;i++) {
        if (i == 1) {
            printf("Enter your first number:");
        } else if (i > 1 && i < num) {
            printf("Enter the next number:");
        } else
            printf("Enter the last number:");

        double temp;
        scanf("%lf", &temp);
        sum += temp;
    }
    double average=sum/num;
    printf("The average of your number is = %.3lf ",average);
}