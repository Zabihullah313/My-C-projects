#include <stdio.h>
int main(){
    int num1,num2,num3;
    printf("Enter 3 numbers with $ between them : ");
    scanf("%d $ %d $ %d",&num1,&num2,&num3);
    num1=num2+num3;
    num2=num3+num1;
    num3=num1+num2;
    printf("%d, %d, %d",num1,num2,num3);}