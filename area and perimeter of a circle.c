#include<stdio.h>
#define pi 3.1415
float r, area, perim;//perim is perimeter
int main(){
    printf("Please enter the radius of the circle: ");
    scanf("%f",&r);
    area=pi *r*r;
    perim=2*pi*r;
    printf("The area  of your circle is %.3f and the perimeter of the circle is %.3f",area,perim);
    return 0;

}
