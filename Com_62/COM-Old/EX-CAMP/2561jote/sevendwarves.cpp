#include<bits/stdc++.h>
using namespace std;
int a[20],b[20];
int main(){

    int i,sum=0;
    for(i=0;i<9;i++)
        scanf("%d",&a[i]),sum+=a[i];
    int fnd=sum-100;
    int j,k=0;
    int x,y;
    for(i=0;i<8;i++)
    {
        k=a[i];
        for(j=i+1;j<9;j++)
        {
            k+=a[j];
            if(k==fnd){x=i,y=j;break;}
            k=a[i];
        }
    }
    //printf("[%d %d]\n",x,y);
    for(i=0;i<9;i++)
        if(i!=x&&i!=y)
            printf("%d\n",a[i]);
    return 0;
}
