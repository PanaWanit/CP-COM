/*
    TASK: LIS Not Easy
    LANG: CPP
    AUTHOR: Pana
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
vector<int> g[100100];
int a[100100],b[100100],ans[100100];
int main(){
    int n,i,cnt=0,k;
    scanf("%d",&n);
    for(i=0;i<n;i++) scanf("%d",&k),a[i]=-k;

    for(i=0;i<n;i++){

      int idx=lower_bound(b,b+cnt,a[i])-b;
      g[idx].push_back(a[i]);
      if(idx==cnt) cnt++;
      b[idx]=a[i];
    }
    printf("%d\n",cnt);
    int tmp=cnt;
    cnt--;
    b[cnt] = g[cnt][0];
    cnt--;
    while(cnt>=0){
        for(i=0;i<g[cnt].size();i++){
            if(g[cnt][i] < b[cnt+1]){
                b[cnt]=g[cnt][i];
                break;
            }
        }
        cnt--;
    }
    for(i=0;i<tmp;i++)
        printf("%d ",-b[i]);
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
9
7 1 4 3 7 2 8 1 1

5
5 2 3 1 1
*/
