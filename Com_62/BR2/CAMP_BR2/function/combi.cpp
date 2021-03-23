#include<bits/stdc++.h>
int n,r,k,cnt;
int a[150],b[150];
void combi(int state,int last)
{
    int i;
    if(state==r)
    {
        cnt++;
        if(cnt==k)
        {
            for(i=0;i<r;i++)
                printf("%d ",a[i]);

        }
        return;
    }

    for(i=last;i<=n;i++)
    {
       // if (b[i]==0)
        //{
          //  b[i]=1;
            a[state]=i;
            combi(state+1,i+1);
           // b[i]=0;
      //  }
    }
}
int main()
{
    scanf("%d %d %d",&n,&r,&k);
    combi(0,1);



    return 0;
}

