#include<bits/stdc++.h>
using namespace std;
struct A{
    long long  data,el;
    bool operator <(const A&o) const
    {
    return el<o.el;
    }

};
A a[1000000];
int main(){
    int n,i,j,num,dt=0;
    double avg=0,sum=0,mx2=0,mx=-2e9;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&a[i].data,&a[i].el);a
    }
    sort(a,a+n);


    for(i=0;i<n;i++)
    {
        sum+=a[i].data;

        avg=sum/a[i].el;
       // printf("avg=%lf\n",avg);
        if(avg>mx)
            mx=avg,mx2=sum,dt=a[i].el;


        avg=a[i].data/a[i].el;
        //printf("[avg=%lf]\n",avg);
        if(avg>mx)
            mx=avg,mx2=sum,dt=a[i].el;
    }
    printf("%.0lf %d",mx2,dt);

return 0;
}
/*
5
3 30
6 10
10 20
7 50
18 70
*/
