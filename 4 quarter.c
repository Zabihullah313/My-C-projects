#include <stdio.h>
#include <math.h>
#define pi 3.1415

int main(){
    char sign;
    int deg;
    printf("enter an angle and  sign of cos: ");
    scanf(" %d %c",&deg,&sign);

    double rad=deg*pi/180;
    if (sin(rad)>0 && sign=='+'){
        printf("it is first quarter");
    }
    else if (sin(rad)>0 && sign=='-'){
        printf("it is second quarter");
    }
    else if (sin(rad)<0 && sign=='-'){
        printf("it is third quarter");
    }
    else if (sin(rad)<0 && sign=='+'){
        printf("it is fourth quarter");
    }
    else{
        printf("error");
    }

}
