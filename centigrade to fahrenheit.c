#include <stdio.h>
int main (){
    float centi;
    printf("Enter a cetigrade :");
    scanf("%f",&centi);
    float fahre;
    fahre=(9.0*centi+(32*5))/5.0;
    printf("%.2f centigrade is equal to %.2f fahrenheit. ",centi,fahre);
    return 0;
}