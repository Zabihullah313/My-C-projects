#include<stdio.h>
#include<math.h>
#define pi 3.14159265358979

int main(){

    float deg,cot,sec,csc;
    float rad;
    printf("Enter your an angle in degree: ");
    scanf("%f",&deg);
    rad=deg*pi/180;
    cot=1/tan(rad);
    sec=1/cos(rad);
    csc=1/sin(rad);
    printf("sin(%.2f) = %f\n",deg,sin(rad));
    printf("cos(%.2f) = %f\n",deg,cos(rad));
    printf("tan(%.2f) = %f\n",deg,tan(rad));
    printf("cot(%.2f) = %f\n",deg,cot);
    printf("sec(%.2f) = %f\n",deg,sec);
    printf("csc(%.2f) = %f\n",deg,csc);
    return 0;
}
