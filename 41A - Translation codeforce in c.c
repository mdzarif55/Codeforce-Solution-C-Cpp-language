//REVERSE STRING

#include<stdio.h>
#include <string.h>
int main()
{
    int a,j,f=0;
    char x[101],y[101];
    scanf("%s %s",x,y);
    a=strlen(x);
    for(int i=0,j=a-1;i<a;i++,j--)
    {
        if(x[i]==y[j])
          f=1;
        else
        {


            f=0;
        break;
        }
    }

    if(f==1)
        printf("YES");
    else
        printf("NO");

    return 0;
}
