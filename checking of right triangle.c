#include<stdio.h>

int main (void)
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a>0 && b>0 && c>0  )
        {if ((a+b>c||a+c>b||b+c>a)&&(a*a==b*b+c*c||b*b==a*a+c*c||c*c==a*a+b*b))
        printf("Yes");
        else
        printf("No");
}
    else
         printf("No");
}
