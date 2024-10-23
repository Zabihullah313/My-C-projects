#include<stdio.h>
int main(void){
    int a1,n,d,an;
    printf("Enter the a1:");
    scanf("%d",&a1);
    printf("Enter the d :");
    scanf("%d",&d);
    printf("Enter the n :");
    scanf("%d",&n);
    printf("its a1\tits d\tits an \n");
    for (int i=0;i<n;i++){
        an = a1+i*d;

        printf("%d\t %d\t %d \n",a1,i,an);

    }
}
