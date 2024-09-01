#include<stdio.h>
#include<string.h>
int main()
{

    char a[30],b[30];
    scanf("%s%s",a,b);
    int i=0,j=0;
    while(2)
    {
        if(a[i]==b[i]) i++;
        if(a[i]=='\0' && b[i]=='\0')
        {
            printf("%s\n",a);
            break;
        }
        else if(a[i]=='\0')
        {
            printf("%s\n",a);
            break;

        }
        else if(b[i]=='\0')
        {
            printf("%s\n",b);
            break;

        }
        else if(a[i]<b[i])
        {
            printf("%s\n",a);
            break;
        }
         else if(a[i]>b[i])
        {
            printf("%s\n",b);
            break;
        }
    }
    return 0;
}