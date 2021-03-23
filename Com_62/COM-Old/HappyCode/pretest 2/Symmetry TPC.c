#include<stdio.h>
int a[100100],cnt,mx=-100,pos,ch;
int main()
{
    int q,n,i;
    scanf("%d",&q);
    while(q--)
    {
        cnt=0;
        ch=0;
        pos=0;
        mx=-100;
        scanf("%d",&n);
        for(i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=0; i<n; i++)
        {
            if(a[i]==0)
                cnt++;
            if(a[i]==1&&cnt%2==1&&cnt>mx)
                mx=cnt,cnt=0,pos=i-1,ch=1;
            else if(i==n-1&&cnt%2==1&&cnt>mx)
                mx=cnt,cnt=0,pos=i,ch=1;
            if(a[i]==1) cnt=0;
        }
        if(ch)
        printf("%d\n",pos-mx/2);
        else printf("-1\n");
    }


    return 0;
}
/*
4
12
1 0 0 0 1 0 0 0 0 0 1 1
12
0 0 0 1 0 0 0 1 0 0 0 0
12
1 1 1 0 1 1 1 0 1 1 1 1
12
0 0 1 1 0 0 1 1 0 0 0 0



*/
