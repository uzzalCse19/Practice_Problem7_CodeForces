#include<stdio.h>
int main()
{
    char x;
    int count[26]={0};
    while( scanf("%c",&x) != EOF){
        if(x =='\n'){
            break;
        }
        int y = x - 'a';
        count[y]++;
    }
    for(int i=0;i<26;i++)
    {
        if(count[i]>0) printf("%c : %d\n",i+'a',count[i]);
    }
}