#include <stdio.h>
int main(){
    int day , week, month, year ,d_day;
    printf("Enter number of the day to be converted: ");
    scanf("%d",&day);
    year=day/365;
    month=(day-year*365)/30;
    week=(day-year*365-month*30)/7;
    d_day= day-year*-month*30-week*7;
    printf("(%d) is equal to %d years, %d months, %d weeks and %d days",day,(int)year,(int)month,(int)week,(int)d_day);
    return 0;

}