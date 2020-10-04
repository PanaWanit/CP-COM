/*
 	TASK : Prime
	AUTHOR : Pana Wanit
	LANG : C++
	SCHOOL : RYW
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
#define all(x) (x).begin(),(x).end()
vector<int> prime{2};
const int mxN = 1e7;
bool mark[mxN];
void sieve(){
	for(int i=3; i<=sqrt(mxN); i+=2){
		if(mark[i]) continue;
		for(int j=i*i; j<=mxN; j+=i){
			mark[j] = 1;
		}
	}
	for(int i=3; i<=mxN; i+=2) if(!mark[i]) prime.pb(i);
}
int main(){
	ios::sync_with_stdio(0),cin.tie(0);
	sieve();
	int n;
	cin >> n;
	cout << prime[n-1] << "\n";
	return 0;
}
