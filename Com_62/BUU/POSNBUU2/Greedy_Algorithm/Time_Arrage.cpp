/*
    TASK: Time Arrange
    LANG: CPP
    AUTHOR: Pana
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
struct A{
    int s,e;
    bool operator <(const A&o) const{
        if(e!=o.e)return e < o.e;
        return s < o.s;
    }
};
A a[100100];
int main(){
    int n,i,j,now=0,la=0,ans=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d %d",&a[i].s,&a[i].e);
    }
    sort(a,a+n);
    for(i=0;i<n;i++){
        if(a[i].s<la) continue;
        ans++;
        la=a[i].e;
    }
    printf("%d",ans);
    return 0;
}
/*
7
0 2
3 6
7 110
0 4
5 7
8 10
6 8
*/
