#include<stdio.h>
int main()
{
    int n,x,y,z,a=0,b=0,c=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d %d %d",&x,&y,&z);
        a=a+x;
        b=b+y;
        c=c+z;
    }
    if(a==0 &&b==0&& c==0)
        printf("YES");
        else
            printf("NO");
    return 0;
}

