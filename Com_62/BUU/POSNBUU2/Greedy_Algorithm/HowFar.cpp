/*
    TASK: How Far state2
    LANG: CPP
    AUTHOR: Pana
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
struct A{
    int num,idx;
   bool operator <(const A&o) const{
    if(num!=o.num)return num < o.num;
    return idx > o.idx;
  }
};
A a[1000005];
int main(){
    int n;
    scanf("%d",&n);
    int i;
    for(i=1;i<=n;i++) {
        scanf("%d",&a[i].num);
        a[i].idx=i;
    }
    sort(a+1,a+n+1);
    int last=a[1].num,ans=-1e9;
    for(i=1;i<=n;i++){
        if(last == a[i].num){
            ans=max(ans,abs(a[i].idx-i));
        }
        else{
            printf("%d %d\n",last,ans);
            last=a[i].num;
            ans=-1e9;
            ans=max(ans,abs(a[i].idx-i));
        }
    }
    printf("%d %d\n",last,ans);
    return 0;
}
/*
12
4 3 2 1 5 1 2 1 3 6 5 4

1 1 1 2 2 3 3 4 4 5 5 6

*/
