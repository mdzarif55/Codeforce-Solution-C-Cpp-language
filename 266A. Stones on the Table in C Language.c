#include<stdio.h>
int main()
{
    int a,b=0;
    scanf("%d",&a);
    char s[a];
    scanf("%s",s);
    for(int i=0;i<a;i++)
    {
        if(s[i]==s[i+1])
            b++;
    }
    printf("%d\n",b);

    return 0;
}
