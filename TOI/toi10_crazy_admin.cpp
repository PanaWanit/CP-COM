/*
  TASK: toi8_crazy_admin
  AUTHOR: pnawn_
  LANG: C++14
  SCHOOL: N/a
  EDITOR: Gvim
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
typedef pair<int,pii> pip;
#define fp first
#define sp second
#define pb push_back
#define eb emplace_back
#define ep emplace
#define dec(x) fixed << setprecision(x);
#define SZ(x) (int)(x).size()
#define all(x) (a).begin() , (a).end()
#define _lb lower_bound
#define _up upper_bound
const int mxN = 1e5;
int a[mxN];
int main(){
	ios::sync_with_stdio(0),cin.tie(0);
	int n,m;
	cin >> m >> n;;
	for(int i=0;i<n;i++)
		cin >> a[i];
	int lb=*max_element(a,a+n) , rb=1<<30, mb;
	while(lb < rb){
		mb = (lb+rb)/2;
		int cnt=1,now=mb;
		for(int i=0;i<n;i++){
			if(now - a[i]>=0) now-=a[i];
			else cnt++,now=mb-a[i];
		}
		if(cnt > m) lb = mb+1;
		else rb = mb;
	}
	cout << rb << "\n";
	return 0;
}
