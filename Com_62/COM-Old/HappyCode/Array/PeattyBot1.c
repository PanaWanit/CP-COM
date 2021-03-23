#include<stdio.h>
#include<string.h>
char a[110];
int main()
{
    int len,x=0,y=0;
    scanf(" %s",a+1);
    len=strlen(a+1);

    for(int i=1;i<=len;i++)
    {
        if(a[i]=='N') y++;
        else if(a[i]=='E') x++;
        else if(a[i]=='W') x--;
        else if(a[i]=='S') y--;
        else if(a[i]=='Z') x=0,y=0;
    }
    printf("%d %d",x,y);
    return 0;
}
