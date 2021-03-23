/*
    TASK: Square Prime
    AUTHOR: Pna_Wan
    LANG: C++
    SCHOOL: Gaiyang
*/
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int mark[1000001];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int i,a,b,ch=0,j;
    for(i=3;i<=sqrt(1000000);i+=2){
      if(mark[i]) continue;
      for(j=i*i;j<=1000000;j+=i)
        mark[j]=1;
    }
    mark[1] = 1;

    cin >> a >> b;
    for(i=a;i<=b;i++){
      if(i==4) cout << 4 << " ";
      int x = sqrt(i);
      if(i%2==0 || mark[x] || x*x!=i) continue;
      cout << i << " " ;
      ch=1;
    }

    if(!ch) cout << -1;
    return 0;
}
/*
if( (int)(sqrt(i))  )

*/
