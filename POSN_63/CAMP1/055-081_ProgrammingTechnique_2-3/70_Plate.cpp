#include<bits/stdc++.h>
using namespace std;
int q[1050][2], Class_ID[10100], Class_cnt[11];
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);// P'dej hai pid OK na Kang Kub Ice
	int cl, student;
	cin >> cl >> student;
	while(student--) {
		int Class, ID;
		cin >> Class >> ID;
		Class_ID[ID]=Class;
	}
	char c;
	int cnt=0;
	cin >> c;
	while(c!='X') {
		if(c=='E') {
			int n;
			cin >> n;
			if(!Class_cnt[Class_ID[n]]) {
				q[cnt][0]=Class_ID[n], q[cnt++][1]=n;
				Class_cnt[Class_ID[n]]++;
			}
			else {
				int i;
				for(i=0; i<cnt&&Class_ID[n]!=q[i][0]; ++i);
				for(; i<=cnt&&Class_ID[n]==q[i][0]; ++i);
				for(int j=cnt-1; j>=i; --j)
					swap(q[j], q[j+1]);
				q[i][0]=Class_ID[n], q[i][1]=n;
				Class_cnt[Class_ID[n]]++;
				++cnt;
			}
		}
		else {
			if(cnt==0) {
				cout << "empty\n";
				continue;
			}
			cout << q[0][1] << "\n";
			--Class_cnt[q[0][0]];
			for(int i=0; i<cnt; ++i)
				q[i][0]=q[i+1][0], q[i][1]=q[i+1][1];
			cnt--;
		}
		cin >> c;
	}
	cout << "0\n";
	return 0;
}
