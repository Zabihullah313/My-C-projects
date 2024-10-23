#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int c1=0,c2=0,c3=0,c4=0,c5=0,c6=0;

int main(void) {
    srand(time(0));
    for (int i = 1; i <= 1000000; i++) {
        int temp =1 + rand()%6;
        if (temp==1)
            c1++;
        else if (temp==2)
            c2++;
        else if (temp==3)
            c3++;
        else if (temp==4)
            c4++;
        else if(temp==5)
            c5++;
        else
            c6++;
    }

    printf("1==%d\n",c1);
    printf("2==%d\n",c2);
    printf("3==%d\n",c3);
    printf("4==%d\n",c4);
    printf("5==%d\n",c5);
    printf("6==%d\n",c6);
}