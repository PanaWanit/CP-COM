/*
    TASK: Peatt_Punch
    LANG: CPP
    AUTHOR: Pana
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
struct A{int h,pow;};
using namespace std;
int a[100100];
stack<A> st;
int main(){
    int j,n,g,pow=0,h;
    scanf("%d %d",&n,&q);
    for(i=0;i<n;i++){
      scanf("%d",&h);
      while(!st.empty() && st.top().h > h) st.pop();
      if(st.empty()) pow=0;
      else pow=max(st.top().pow,h-st.top().h);
      st.push({h,pow});
      a[i]=pow;
    }
    sort(a,a+n);
    while(q--){
      scanf("%d",&i);
      h=upper_bound(a,a+n,i)-a;
      printf("%d\n",n-h);
    }
    return 0;
}
/*
5 2
1
3
4
2
3
2
1

5 2 1 3 4 2 3 2 1
*/
