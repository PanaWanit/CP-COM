#include<stdio.h>
char a[110];
int main()
{
    int x=0,y=0,i;
    int len;
    scanf(" %s",a);
    len=strlen(a);
    for(i=0;i<len;i++){
        if(a[i]=='N')
            y++;
        else if(a[i]=='S')
            y--;
        else if(a[i]=='E')
            x++;
        else if(a[i]=='W')
            x--;
        else if(a[i]=='Z')
            x=0,y=0;
    }
    printf("%d %d",x,y);x
    return 0;
}
