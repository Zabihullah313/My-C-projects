
#include <stdio.h>
#include <math.h>
int main(void){
    double pi=0;
    double odd=1;
    for(int i=1;i<1000000;i+=1){
        double temp=pow((-1),i+1)*4/odd;
        pi=pi+temp;
        odd+=2.0;
    }
    printf("The pi number is equal to =%.15lf",pi);
}
