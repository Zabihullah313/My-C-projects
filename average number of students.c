#include<stdio.h>
int main (){
    int number_of_students;
    double sum=0;
    int i;
    printf("Enter number of students :");
    scanf("%d",&number_of_students);
    for(i=1;i<=number_of_students;i++){
        printf("Enter score of %d-th student: ",i);
        double mark;
        scanf("%lf",&mark);
        sum=sum+mark;}

    double aver=sum/number_of_students;
    printf("The average of students is = %.3lf",aver);
    return 0;

}