#include <stdio.h>
int main(void){
    int pos_count=0, neg_count=0, num;
    printf("Enter a positive or negative number (zero to stop);");
    scanf("%d",&num);
    while (num!=0){
        if (num>0)
            pos_count++;
        else {
            neg_count++;
        }
        printf("Enter the next number :");
        scanf("%d",&num);
    }
    printf("you entered %d positive number  \n",pos_count);
    printf("you entered %d negative number  \n",neg_count);
}