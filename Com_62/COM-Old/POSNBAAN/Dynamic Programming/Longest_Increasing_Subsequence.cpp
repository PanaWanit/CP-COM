/*
    TASK: LIS
    LANG: CPP
    AUTHOR: Pana
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
int a[100100],b[100100];
int main(){
    int n,i,cnt=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++) scanf("%d",&a[i]);
    for(i=1;i<=n;i++){
      int idx=lower_bound(b,b+cnt,a[i])-b;
      if(idx==cnt) cnt++;
      b[idx]=a[i];
    }
    printf("%d",cnt);
    return 0;
}
/*
6
1 4 2 6 7 3
6
1 2 5 3 4 9
5
5 4 3 2 1
4
3 2 1 4

8
-7 10 9 2 3 8 8 1
*/
