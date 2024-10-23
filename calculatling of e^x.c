#include <stdio.h>
#include <math.h>
int fact(int n){
    int res=1;
    for (int i=1;i<=n;i++){
        res=res*i;
    }
    return res;
}
int main(void) {
    double ex = 1;
    int x;
    printf("Enter power of e^x:");
    scanf("%d",&x);
    for (int i = 1; i <= 10; i++) {
        ex = ex + pow(x,i) / fact(i);
    }

    printf("e^%d=%lf",x,ex);
}