#include <stdio.h>
int main(void)
{
    {
        for (int p=1;p<=10;p++)
        {
            if (p==5){
                continue;}
            printf("%d  ",p);
        }
    }


    printf("\n");

    int q=1;
    while (q<=10)
    {
        // if (q==5){
        //  continue;}

        printf("%d  ",q);
        q++;

    }

    printf("End of while loop!|\n\n");



    //solution!!

    for (int  i = 1; i <= 10; i++) {
        if (i == 4) {
            continue;
        }
        printf("%d ", i);
    }
    printf("\n");


    int i = 0;
    while (i <10) {

        i++;
        if (i == 4) {
            continue;
        }
        printf("%d ", i);
    }
    return 0;



}