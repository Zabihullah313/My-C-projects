#include <stdio.h>
float day, year, month, week, hour, minute, second;
int main(){
    printf("Please enter number of the days to be converted: ");
    scanf("%f",&day);
    year=day/365.25;
    month=day/30.4375;
    week=day/7;
    hour=day*24;
    minute=day*24*60;
    second=day*24*60*60;
    printf(" %.2f days are equal to %.3f years \n %.2f days are equal to %.3f months \n %.2f days are equal to %.3f weeks \n",day,year,day,month,day,week);
    printf(" %.2f days are equal to %.3f hours \n %.2f days are equal to %.3f minutes \n %.2f days are equal to %.3f seconds \n",day,hour,day,minute,day,second);

    return 0;




}
