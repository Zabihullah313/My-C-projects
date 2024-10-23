#include<stdio.h>
int a ;
void main(){
    printf("Enter an integer number: ");
    scanf("%i",&a);

    if (a%2==0){
        printf("%i is an even number.",a);
    }
    else{
        printf("%i is an odd number.",a);

}
}
