#include<stdio.h>
int main (){
    int n=8;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <=n ; j++) {
            printf("* ");
        }
        printf("\n");
        if (i%2==1)
            printf(" ");
    }
}