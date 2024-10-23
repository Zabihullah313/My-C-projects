#include<stdio.h>

int main (void)
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a>0 && b>0 && c>0  )
        {if (a+b+c==180&&(a+b>c||a+c>b||b+c>a))
        printf("Yes");
        else
        printf("No");
}
    else
         printf("No");
}
