#include<bits/stdc++.h>
char a[10020];
int x,y,z;
int n,e,s,w;
using namespace std;
int main()
{
    scanf(" %s",a);
    scanf("%d",&z);
    int len=strlen(a);

    for(int i=0;i<len;i++)
    {
        if(a[i]=='N') y++,n++;
        else if(a[i]=='S') y--,s++;
        else if(a[i]=='E') x++,e++;
        else if(a[i]=='W') x--,w++;
    }
    if(len==z){
    printf("0");
    return 0;}
    while(z--)
    {
        if(w>0&&e>w)
            w--,x++;
        else if(e>0&&w>e)
            e--,x--;
        else if(n>0&&s>n)
            n--,y--;
        else if(s>0&&n>s)
            s--,y++;
        else if(s==0&&n>0)
            n--,y--;
        else if(n==0&&s>0)
            s--,y++;
        else if(w==0&&e>0)
            e--,x--;
        else if(e==0&&w>0)
            w--,x++;
    }

    printf("%d",2*(abs(x)+abs(y)));
    return 0;
}
