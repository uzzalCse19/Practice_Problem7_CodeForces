#include<stdio.h>
#include<string.h>
int main()
{

int n,ans=0,i=0;
char x[1000001];
scanf("%d %s",&n,&x);
while(x[i]!='\0')
{
    ans+=x[i]-'0';
    i++;
}
printf("%d\n",ans);
    return 0;
}