/*
 	TASK : Awit Cat
	AUTHOR : Pana Wanit
	LANG : C++
	SCHOOL : RYW
 */
#include<bits/stdc++.h>
using namespace std;
string meow = "meow";
void solve(){
	bool ans=0;
	string a;
	getline(cin,a);
	stringstream ss(a);
	string b;
	while(ss >> b){
		int len = (int)b.size();
		bool ch=0;
		if(len < 4 || len%4!=0) continue;
		for(int i=0; i<len; i+=4){
			for(int j=0; j<4; j++){
				if(b[i+j] != meow[j]) ch=1;
			}
		}
		if(!ch) {ans=1;break;}
		b="";
	}
	cout << (ans?"YES":"NO") << "\n";
}
int main(){
	ios::sync_with_stdio(0),cin.tie(0);
	int t;
	string inp;
	getline(cin,inp);
	t = stoi(inp);
	while(t--) solve();
	return 0;
}
