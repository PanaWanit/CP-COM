#include<bits/stdc++.h>
using namespace std;
char a[10010];
int main()
{
    int x=0,y=0,n=0,s=0,e=0,w=0,z,i,len;
    scanf(" %s",a);
    scanf("%d",&z);
    len=strlen(a);

    for(i=0;i<len;i++)
    {
        if(a[i]=='N') y++,n++;
        else if(a[i]=='S') y--,s++;
        else if(a[i]=='E') x++,e++;
        else if(a[i]=='W') x--,w++;
     }

    if(len==z)
    {
        printf("0");
        return 0;

    }
    int k=z;

     while(k--)
        {
            if(x==0&&y==0)
                x+=1;

            else if(e>w&&w>0)
            {
                x++,w--;
            }
            else if(w>e&&e>0)
            {
                x--,e--;
            }
            else if(n>s&&s>0)
            {
                y++,s--;
            }
            else if(s>n&&n>0)
            {
                y--,n--;

            }
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
