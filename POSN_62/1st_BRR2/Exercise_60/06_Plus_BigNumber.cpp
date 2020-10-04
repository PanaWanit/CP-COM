/*
 	TASK : Plus Big Number
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
void add(string& a, string& b){
	string c;
	int A = (int)a.size()-1 , B = (int)b.size()-1,tod=0;
	while(A>=0 || B>=0){
		int x = (A<0?'0':a[A--]) + (B<0?'0':b[B--]) + tod - 2*'0';
		c += (char)(x%10+'0');
		tod = x/10;
	}
	if(tod) c += char(tod + '0');
	for(int i=(int)c.size()-1; i>=0; i--) cout << c[i];
	cout << "\n";
}
void substract(string& a,string& b){ // a < 0 && b > 0
	string c;
	int A = (int)a.size()-1 , B = (int)b.size()-1;
	if( a.substr(1) == b) {cout << 0 << "\n";return;}
	bool MA = 0; // MA = 1 ans < 0 MA =0 ans > 0
	//find max
	if(A-1 > B) cout << "-",MA=1;
	else if(B > A-1) MA=0;
	else if(A-1 == B){
		for(int i=0; i<=B; i++){
			if(a[i+1] > b[i]) {cout << "-",MA=1;break;}
			else if(b[i] > a[i+1]) {MA=0;break;}
		}
	}
	a = a.substr(1),A--;
	int x;
	if(!MA) swap(a,b),swap(A,B); // a > b
	int q = 5000;
	while(q--){
		x = (A<0?'0':a[A]) - (B<0?'0':b[B]);
		if(x < 0){
			x += 10;
			for(int i=A; i>=0; i--){
				if(a[i] == '0') a[i] = '9';
				else if(a[i] > '0') {a[i]--;break;}
			}
		}
		c += char(x+'0');
		A--,B--;
	}
	int i = (int)c.size()-1;
	for(;i>=0;) if(c[i--] != '0') break;
	for(i=i+1;i>=0;) cout << c[i--];
	cout << "\n";
}
int main(){
	ios::sync_with_stdio(0),cin.tie(0);
	string a,b;
	cin >> a >> b;
	if(a[0] != '-' && b[0] != '-') add(a,b);
	else if(a[0] == '-' && b[0] == '-') cout << "-",add(a,b);
	else if(a[0] == '-' && b[0] != '-') substract(a,b);
	else if(a[0] != '-' && b[0] == '-') substract(b,a);
	return 0;
}
