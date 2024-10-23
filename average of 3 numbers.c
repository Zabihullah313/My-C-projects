#include <stdio.h>
int main(){
    double a, b, c;
    float avr ;
    printf("Please enter 3 numbers in a line with a comma between numbers : ");
    scanf("%lf,%lf,%lf",&a,&b,&c);
    avr=(a+b+c)/3 ;
    printf("%f",1.0);
    printf("the average is %.5lf",avr);
    return 0;

}
