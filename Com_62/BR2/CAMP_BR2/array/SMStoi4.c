#include<stdio.h>
int n;
int now=0;
char a[10010];
int push(int bt,int t)
{
    switch(bt)
    {
        case 1: {now-=t;
        if(now<0)
            now=0;

        break;}
        case 2: {
        t%=3;
        if(t==0)       a[now++]='C';
        else if(t==1) a[now++]='A';
        else if(t==2) a[now++]='B';
        break;
        }
        case 3: {
            t%=3;
        if(t==0) a[now++]='F';
        else if(t==1) a[now++]='D';
        else if(t==2) a[now++]='E';
        break;
            }
        case 4: {
            t%=3;
        if(t==0) a[now++]='I';
        else if(t==1) a[now++]='G';
        else if(t==2) a[now++]='H';
        break;
            }
        case 5: {

            t%=3;
        if(t==0) a[now++]='L';
        else if(t==1) a[now++]='J';
        else if(t==2) a[now++]='K';
        break;
            }
        case 6: {
            t%=3;
        if(t==0) a[now++]='O';
        else if(t==1) a[now++]='M';
        else if(t==2) a[now++]='N';
        break;
            }
        case 7: {
            t%=4;
        if(t==0) a[now++]='S';
        else if(t==1) a[now++]='P';
        else if(t==2) a[now++]='Q';
        else if(t==3) a[now++]='R';
        break;
        }
        case 8: {
            t%=3;
        if(t==0) a[now++]='V';
        else if(t==1) a[now++]='T';
        else if(t==2) a[now++]='U';
        break;
            }
        case 9: {
            t%=4;
        if(t==0) a[now++]='Z';
        else if(t==1) a[now++]='W';
        else if(t==2) a[now++]='X';
        else if(t==3) a[now++]='Y';
        break;
            }
    }
}
int main()
{
    int b,h,v,i,j,s,t;
    scanf("%d %d %d",&n,&s,&b);
    push(s,b);
    i=(s-1)/3; j=(s-1)%3; n--;
    while(n--)
    {
        scanf("%d %d %d",&h,&v,&b);
        i+=v;j+=h;
        s=i*3+j+1;
        push(s,b);
    }
    for(i=0;i<now;i++)
        printf("%c",a[i]);
    if(now==0)
        printf("null");

    return 0;
}
