#include <stdio.h>
float length , width ;
int main(){
    printf(" Enter the length of your rectangle : ");
    scanf("%f",&length);
    printf(" Enter the width of your rectangle : ");
    scanf("%f",&width);
    float area=length*width ;
    float perimeter=2*(length+width) ;
    printf("The area of your rectangle is %.2f and the perimeter of your rectangle is %.2f",area,perimeter);
    return 0;

}
