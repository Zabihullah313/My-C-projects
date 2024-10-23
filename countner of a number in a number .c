#include <stdio.h>
int main(){
    printf("Enter a long number :");
    long long int n;
    scanf("%lld",&n);
    int counter=0;
    while (n>0){
        int temp=n%10;
        if (temp==5)
            counter++;
        n=n/10;
    }
    printf("your number has %d five",counter);

}