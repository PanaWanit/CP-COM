/*
 	TASK : Oversort
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
const int mxN = 1e5;
double d[mxN];
char c[mxN];
struct A{
	char a[100];
	bool operator < (const A&o) const{
		if(strcmp(a,o.a) < 0) return true;
		return false;
	}
} str[mxN];
int main(){
	ios::sync_with_stdio(0),cin.tie(0);
	int t,n;
	cin >> t >> n;
	if(t <= 2){
		cout << fixed << setprecision(0);
		for(int i=0; i<n; i++) cin >> d[i];
		sort(d,d+n);
		for(int i=0; i<n; i++) cout << d[i]  << " ";
		cout << "\n";
		for(int i=n-1; i>=0; i--) cout << d[i] << " ";
		cout << "\n";
	}
	else if(t == 3){
		for(int i=0; i<n; i++) cin >> c[i];
		sort(c,c+n);
		for(int i=0; i<n; i++) cout << c[i] << " ";
		cout << "\n";
		for(int i=n-1; i>=0; i--) cout << c[i] << " ";
		cout << "\n";
	}
	else{
		for(int i=0; i<n; i++) cin >> str[i].a;
		sort(str,str+n);
		for(int i=0; i<n; i++) cout << str[i].a << " ";
		cout << "\n";
		for(int i=n-1; i>=0; i--) cout << str[i].a << " ";
		cout << "\n";
	}
	return 0;
}
