#include<bits/stdc++.h>
using namespace std;
int a[500500],b[500500];
int main(){
    int n,wire,mi;
    scanf("%d %d",&wire,&n);
    int ch,i,l=0,r=1e9,sum=0,cnt;
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    while(l<r)
    {
        ch=1;
        cnt=0;
        mi=(l+r)/2;
        sum=mi;
        for(i=0; i<n; i++)
        {
            if(mi-a[i]<0) ch=0;
            if(sum-a[i]>=0)
                sum-=a[i];
            else
                cnt++,sum=mi-a[i];
        }
        if(cnt>wire||ch==0) l=mi+1;
        else                r=mi;


    }
    printf("%d",r);


    return 0;
}
/*
2
500  400 400
*/
