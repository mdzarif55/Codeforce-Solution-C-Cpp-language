#include<stdio.h>
int main()
{
    int n,a=0,d=0;
    scanf("%d",&n);
    char s[n];
    scanf("%s",s);
    for(int i=0;i<n;i++)
    {
        if(s[i]=='A')
           a++;
        if(s[i]=='D')
            d++;
    }
     if(a>d)
        printf("Anton\n",a);
     if(a<d)
        printf("Danik\n");
     if(a==d)
        printf("Friendship\n");

    return 0;
}
