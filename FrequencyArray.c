#include<stdio.h>
#include<string.h>
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    long long int arr[n];
     int ans[100000]={0};
    for(long long int i=0;i<n;i++)
    {
        int v;
        scanf("%d",&v);
        ans[v]++;
    }
    for(int i=1;i<=m;i++ )
    {
        printf("%d\n",ans[i]);
    }
    return 0;
}