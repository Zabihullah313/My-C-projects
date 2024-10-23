#include<stdio.h>
int i,n ;
void main(){
    printf("Enter an integer number: ");
    scanf("%i",&i);
    if (i<0){n=i*(-1);}
    while (n>=2) {
            n=n-2;
}
    if(n==0){
        printf("%i is an enen number",i);
    }
    else{
        printf("%i is an odd number",i);

    }
}
