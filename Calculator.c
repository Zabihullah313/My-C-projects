#include<stdio.h>
float opr1 ,opr2,res;
char operator;
int main()

{
    printf("Enter your first operand : ");
    scanf("%f",&opr1);
    printf("Enter your second operand : ");
    scanf("%f",&opr2);
    printf("Enter your operator : ");
    scanf("   %c ", &operator);


    switch (operator) {
        case '+':
            res=opr1+opr2;
            break;

        case '-':
            res=opr1-opr2;
            break;

        case '*':
            res=opr1*opr2;
            break;
        case '/':
            if (opr2==0){
                printf("undefined");
            }
            else
            res=opr1/opr2;

            break;


    }
    printf("%f",res);
    return 0;

    }
    
