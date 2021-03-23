/*
    TASK: Great Wall
    AUTHOR: Pna_Wan
    LANG: C++
    SCHOOL: Gaiyang
*/
#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int mxN = 100100;
int a[mxN];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int i,j,l,r,mid,n,w,k,mx=-2e9,z;
    cin >> n >> w >> k;
    l=1;
    r = 1e9+1;
    for(i=0;i<n;i++){
      cin >> a[i];
      mx = max(mx,a[i]);
    }
    while(l < r){
      mid = (l+r+1)/2;

    }
    cout << l;
    return 0;
}
