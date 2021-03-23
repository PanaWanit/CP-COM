#include<bits/stdc++.h>
using namespace std;
int a[20];
int main()
{
    int x,sum=0,mark;
    scanf("%d",&x);
    for(int i=0;i<5;i++)
        scanf("%d",&a[i]),sum+=a[i];
    if(sum==x){
        for(int i=0;i<5;i++)
            printf("%d ",a[i]);
        return 0;
    }
    sum=0;

    for(int i=0;i<5;i++)
    {
        //printf("%d=",i);
        for(int j=0;j<5;j++)
        {
            if(i!=j)
                sum+=a[j];


        }
        //printf("[%d]\n",sum);
        if(sum==x)
        {
            for(int g=0;g<5;g++)
            {
                if(g==i) printf("0 ");
                else printf("%d ",a[g]);
            }
            return 0;
        }
        sum=0;
    }
    printf("-1");
    return 0;
}
