#include <stdio.h>

int main(void)
{
    unsigned n;
    printf("Enter a number :");
    scanf("%u",&n);
    int denominator=0;
    for(int i=1;i<n;i++)
    {
        if (n%i==0)
            denominator=denominator+i;
    }
    if(denominator==n)
        printf("%d is a complete number.",n);
    else
        printf("%d is not a complete number.",n);
}