//I=1,V=5,X=10,L=50,C=100,D=500,M=1000
//V`=5000,X`=10000,L`=50000,C`=100000,D`=500000,M`=1000000
//V``=5000000,X``=10000000,L``=50000000,C``=100000000,D``=500000000,M``=1000000000
//V```=5000000000,X```=10000000000,L```=50000000000,C```=100000000000,D```=500000000000,M```=1000000000000
#include <stdio.h>
int main(void)
{
    int num;
    int dig[15];
    printf("Enter your number :");
    scanf("%d", &num);
    int n =num;
    int i = 0;

    while (num > 0) {
        dig[i] = num % 10;
        num /= 10;
        i++;}


    printf("The Roman form of %d is ",n);

    //13th digit
    if (dig[12]) {
        if (dig[12] == 1)
            printf("M```");
        else if (dig[12] == 2)
            printf("M```M```");
        else if (dig[12] == 3)
            printf("M```M```M```");
    }
    //12th digit
    if (dig[11]) {
        if (dig[11] == 1)
            printf("C```");
        else if (dig[11] == 2)
            printf("C```C```");
        else if (dig[11] == 3)
            printf("C```C```C```");
        else if (dig[11] == 4)
            printf("C```D```");
        else if (dig[11] == 5)
            printf("D```");
        else if (dig[11] == 6)
            printf("D```C```");
        else if (dig[11] == 7)
            printf("D```C```C```");
        else if (dig[11] == 8)
            printf("D```C```C```C```");
        else if (dig[11] == 9)
            printf("C```M```");
    }
    //11th digit
    if (dig[10]) {
        if (dig[10] == 1)
            printf("X```");
        else if (dig[10] == 2)
            printf("X```X```");
        else if (dig[10] == 3)
            printf("X```X```X```");
        else if (dig[10] == 4)
            printf("X```L```");
        else if (dig[10] == 5)
            printf("L```");
        else if (dig[10] == 6)
            printf("L```X```");
        else if (dig[10] == 7)
            printf("L```X```X```");
        else if (dig[10] == 8)
            printf("L```X```X```X```");
        else if (dig[10] == 9)
            printf("X``C```");
    }
    //10th digit
    if (dig[9]) {
        if (dig[9] == 1)
            printf("M``");
        else if (dig[9] == 2)
            printf("M``M``");
        else if (dig[9] == 3)
            printf("M``M``M``");
        else if (dig[9] == 4)
            printf("M``V```");
        else if (dig[9] == 5)
            printf("V```");
        else if (dig[9] == 6)
            printf("V```M``");
        else if (dig[9] == 7)
            printf("V```M``M``");
        else if (dig[9] == 8)
            printf("V```M``M``M``");
        else if (dig[9] == 9)
            printf("M``X```");
    }
    //9th digit
    if (dig[8]) {
        if (dig[8] == 1)
            printf("C``");
        else if (dig[8] == 2)
            printf("C``C``");
        else if (dig[8] == 3)
            printf("C``C``C``");
        else if (dig[8] == 4)
            printf("C``D``");
        else if (dig[8] == 5)
            printf("D``");
        else if (dig[8] == 6)
            printf("D``C``");
        else if (dig[8] == 7)
            printf("D``C``C``");
        else if (dig[8] == 8)
            printf("D``C``C``C``");
        else if (dig[8] == 9)
            printf("C``M``");
    }
    //8th digit
    if (dig[7]) {
        if (dig[7] == 1)
            printf("X``");
        else if (dig[7] == 2)
            printf("X``X``");
        else if (dig[7] == 3)
            printf("X``X``X``");
        else if (dig[7] == 4)
            printf("X``L``");
        else if (dig[7] == 5)
            printf("L``");
        else if (dig[7] == 6)
            printf("L``X``");
        else if (dig[7] == 7)
            printf("L``X``X``");
        else if (dig[7] == 8)
            printf("L``X``X``X``");
        else if (dig[7] == 9)
            printf("X``C``");
    }
    //7th digit
    if (dig[6]) {
        if (dig[6] == 1)
            printf("M`");
        else if (dig[6] == 2)
            printf("M`M`");
        else if (dig[6] == 3)
            printf("M`M`M`");
        else if (dig[6] == 4)
            printf("M`V``");
        else if (dig[6] == 5)
            printf("V``");
        else if (dig[6] == 6)
            printf("V``M`");
        else if (dig[6] == 7)
            printf("V``M`M`");
        else if (dig[6] == 8)
            printf("V``M`M`M`");
        else if (dig[6] == 9)
            printf("M`X``");
    }
    //6th digit
    if (dig[5]) {
        if (dig[5] == 1)
            printf("C`");
        else if (dig[5] == 2)
            printf("C`C`");
        else if (dig[5] == 3)
            printf("C`C`C`");
        else if (dig[5] == 4)
            printf("C`D`");
        else if (dig[5] == 5)
            printf("D`");
        else if (dig[5] == 6)
            printf("D`C`");
        else if (dig[5] == 7)
            printf("D`C`C`");
        else if (dig[5] == 8)
            printf("D`C`C`C`");
        else if (dig[5] == 9)
            printf("C`M`");
    }
    //5th digit
    if (dig[4]) {
        if (dig[4] == 1)
            printf("X`");
        else if (dig[4] == 2)
            printf("X`X`");
        else if (dig[4] == 3)
            printf("X`X`X`");
        else if (dig[4] == 4)
            printf("X`L`");
        else if (dig[4] == 5)
            printf("L`");
        else if (dig[4] == 6)
            printf("L`X`");
        else if (dig[4] == 7)
            printf("L`X`X`");
        else if (dig[4] == 8)
            printf("L`X`X`X`");
        else if (dig[4] == 9)
            printf("X`C`");
    }
    //4th digit
    if (dig[3]) {
        if (dig[3] == 1)
            printf("M");
        else if (dig[3] == 2)
            printf("MM");
        else if (dig[3] == 3)
            printf("MMM");
        else if (dig[3] == 4)
            printf("MV`");
        else if (dig[3] == 5)
            printf("V`");
        else if (dig[3] == 6)
            printf("V`M");
        else if (dig[3] == 7)
            printf("V`MM");
        else if (dig[3] == 8)
            printf("V`MMM");
        else if (dig[3] == 9)
            printf("MX`");
    }

    //3rd digit
    if (dig[2]) {
        if (dig[2] == 1)
            printf("C");
        else if (dig[2] == 2)
            printf("CC");
        else if (dig[2] == 3)
            printf("CCC");
        else if (dig[2] == 4)
            printf("CD");
        else if (dig[2] == 5)
            printf("D");
        else if (dig[2] == 6)
            printf("DC");
        else if (dig[2] == 7)
            printf("DCC");
        else if (dig[2] == 8)
            printf("DCCC");
        else if (dig[2] == 9)
            printf("CM");
    }

    //2nd digit
    if (dig[1]) {
        if (dig[1] == 1)
            printf("X");
        else if (dig[1] == 2)
            printf("XX");
        else if (dig[1] == 3)
            printf("XXX");
        else if (dig[1] == 4)
            printf("IL");
        else if (dig[1] == 5)
            printf("L");
        else if (dig[1] == 6)
            printf("LI");
        else if (dig[1] == 7)
            printf("LII");
        else if (dig[1] == 8)
            printf("LIII");
        else if (dig[1] == 9)
            printf("IC");
    }

    //1st digit
    if (dig[0]) {
        if (dig[0] == 1)
            printf("I");
        else if (dig[0] == 2)
            printf("II");
        else if (dig[0] == 3)
            printf("III");
        else if (dig[0] == 4)
            printf("IV");
        else if (dig[0] == 5)
            printf("V");
        else if (dig[0] == 6)
            printf("VI");
        else if (dig[0] == 7)
            printf("VII");
        else if (dig[0] == 8)
            printf("VIII");
        else if (dig[0] == 9)
            printf("IX");
    }
    return 0;
}