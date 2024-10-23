
#include <stdio.h>
int main()
{
    int n;
    int pow;
    printf("Enter a number and power:");
    scanf("%d %d",&n,&pow);
    int i=1;
    long long int res=1;

    while(i<=pow)
    {
        res=res*n;
        i++;

    }
    printf ("%lld",res);
}