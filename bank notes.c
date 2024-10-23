#include<stdio.h>
int mon, thous, fhund, hund, fift, twin, ten, five, two, one;
int main(){
    printf("Please enter the amount of money:");
    scanf("%d",&mon);
    thous=mon/1000;
    int h1=mon-thous*1000;
    fhund=h1/500;
    int h2= mon-thous*1000-fhund*500;
    hund=h2/100;
    int h3=mon-thous*1000-fhund*500-hund*100;
    fift=h3/50;
    int h4=mon-thous*1000-fhund*500-hund*100-fift*50;
    twin=h4/20;
    int h5=mon-thous*1000-fhund*500-hund*100-fift*50-twin*20;
    ten=h5/10;
    int h6=mon-thous*1000-fhund*500-hund*100-fift*50-twin*20-ten*10;
    five=h6/5;
    int h7=mon-thous*1000-fhund*500-hund*100-fift*50-twin*20-ten*10-five*5;
    two=h7/2;
    int h8=mon-thous*1000-fhund*500-hund*100-fift*50-twin*20-ten*10-five*5-two*2;
    one=h8/1;

    printf("Your money becomes %d note(s) of 1000, %d note(s) of 500, %d note(s) of 100, %d note(s) of 50, %d note(s) of 20, %d note(s) of 10, %d coin(s) of 5, %d coin(s) of 2, %d coin(s) 1 ",thous,fhund,hund,fift,twin,ten,five,two,one);






}
