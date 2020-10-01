/*
 	TASK : sms
	AUTHOR : Pana Wanit
	LANG : C++
	SCHOOL : RYW
 */
#include<bits/stdc++.h>
using namespace std;
char a[10][5] = {"","","CAB","FDE","IGH","LJK","OMN","SPQR","VTU","ZWXY" };
int mod[] = {0,4097,33,3,3,3,3,4,3,4};
string ans;
void sms(int b,int t){
	if(b==1){
		if(t >= (int)ans.size()) ans="";
		else for(int i=0; i<t; i++) ans.pop_back();
		return;
	}
	ans += a[b][t];
}
int main(){
	ios::sync_with_stdio(0),cin.tie(0);
	int q,b,t;
	cin >> q >> b >> t;
	sms(b,t%mod[b]);
	int i = b/3 , j=b%3;
	while(--q){
		int h,v;
		cin >> h >> v >> t;
		i += v , j += h;
		sms(3*i+j,t%mod[3*i+j]);
	}
	cout << ((int)ans.size()?ans:"null") << "\n";
	return 0;
}
