#include<stdio.h>
#include <string.h>
int main()
{
    long long a;
    int n,c=0;
    scanf("%lld",&a);
     for ( ;a != 0;)
//while(a!=0) //
    {

        if(a%10==7 ||a%10==4)
            c++;
            a=a/10;
    }
    if(c==4 || c==7)
        printf("YES");
    else
        printf("NO");

    return 0;
}

