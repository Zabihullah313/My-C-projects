#include <stdio.h>
int main(){
    int line;
    printf("Enter the lines of the diamond :");
    scanf("%d",&line);
    int space=line/2;
    int star=1;
    for (int i = 0; i < line/2+1; ++i) {
        for (int j = 0; j < space; ++j) {

            printf("  ");}

        for (int k = 1; k <=star ; ++k) {
            if(k==1||k==star)
                printf("**");
            else
                printf("  ");

            if (line<k)
                break;
        }
        printf("\n");
        space--;
        star+=2;

    }

    space=1;
    star=line-2;
    for (int i = 0; i < line/2; ++i) {
        for (int j = 0; j < space; ++j) {
            printf("  ");
        }
        for (int k = 1; k <= star; ++k) {
            if(k==1||k==star)
                printf("**");
            else
                printf("  ");

        }
        space++;
        star-=2;
        printf("\n");
    }
    return 0;
}