#include<stdio.h>
#include <stdlib.h>
int main()
{
    int k,n,w,c=0,sum=0;
    scanf("%d %d %d",&k,&n,&w);
    for (int i=1;i<=w;i++)
    {
        sum=sum+k*i;
    }
    c=sum-n;
    if (c>0)
    printf("%d\n",c);
    else
        printf("0\n");

}
