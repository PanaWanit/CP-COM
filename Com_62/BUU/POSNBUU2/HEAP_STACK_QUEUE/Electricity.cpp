/*
    TASK: Electricity
    LANG: CPP
    AUTHOR: Pana
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
#define x first
#define y second
using namespace std;
typedef pair<int,int> PII;
priority_queue<PII> he;
int a[500500];
int main(){
    int n,k,i;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    for(i=1;i<n && i<=k;i++) he.push(make_pair(-(a[0]+a[i]),i));
    for(i=k+1;i<n;i++){
      while(!he.empty() && i-he.top().y>k) he.pop();
      int tmp = -he.top().x;
      if(i==n-1){
        printf("%d\n",tmp+a[i]);
        return 0;
      }
      he.push(make_pair(-(tmp+a[i]),i));
    }
    return 0;
}
/*
10
4
2 1 4 3 2 1 5 1 2 3
*/
