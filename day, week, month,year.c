#include <stdio.h>
int iday ,year , mon , week ,day, h1,h2;
int main(){
    printf("Input the number days : ");
    scanf("%d",&iday);
    year = iday/365;
    h1 = iday - year *365;
    mon= h1/30;
    h2=iday -year*365-mon*30;
    week=h2/7;
    day=iday-year*365-mon*30-week*7;

    printf("%d days are equal to %d year(s) , %d month(s) , %d week(s) and %d day(s)",iday,year,mon,week,day);



}
