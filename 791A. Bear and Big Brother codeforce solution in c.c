#include<stdio.h>
int main()
{
    int a,b,c=1;
    scanf("%d %d",&a,&b);
    for (int i=0;i<100;i++)
    {
        a=a*3;
        b=b*2;
        if(a>b)

        break;

        else
            c++;
    }
    printf("%d\n",c);
    return 0;

}
