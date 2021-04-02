#include<bits/stdc++.h>
using namespace std;
const int mxN = 1.5e6;
bool not_prime[mxN+100];
vector<int> prime{2};
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int n;
	cin >> n;
	for(int i=3; i<=sqrt(mxN); i+=2) {
		if(not_prime[i]) continue;
		for(int j=i*i; j<=mxN; j+=i)
			not_prime[j]=1;
	}
	for(int i=3; i<=mxN; i+=2)
		if(!not_prime[i]) prime.push_back(i);
	for(auto& x : prime) {
		if(x<n) continue;
		string s = to_string(x);
		int i,sz=(int)s.size();
		for(i=0; i<sz/2; i++)
			if(s[i]!=s[sz-i-1]) break;
		if(i==sz/2) {
			cout << x << "\n";
			return 0;
		}
	}
	return 0;
}

