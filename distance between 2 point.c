#include<stdio.h>
#include<math.h>
float x1 , yy1 ,x2 ,y2 ;
int main(){
    printf("Write your first point (x1,y1): ");
    scanf("%f %f",&x1,&yy1);
    printf("Write your second point (x2,y2): ");
    scanf("%f %f",&x2,&y2);
    float dist=sqrt(pow((x2-x1),2)+(pow((y2-yy1),2)));


    printf("the distance between 2 point is %.3f\n",dist);
    return 0;

}
