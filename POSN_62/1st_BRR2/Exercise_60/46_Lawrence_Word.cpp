/*
 	TASK : Lawrence Word
	AUTHOR : Pana Wanit
	LANG : C++
	SCHOOL : RYW
 */
#include<bits/stdc++.h>
using namespace std;
struct A {
	char c; int num;
} a[8];
int n,m,cnt=0;
string word[40400];
char b[8];
void play(int state=0) {
	if(state == n) {
		bool ch=(cnt==0);
		for(int i=0; i<n&&cnt>0; i++)
			if(word[cnt-1][i] != b[i]) ch=1;
		if(ch) {
			for(int i=0; i<n; i++)
				word[cnt] += b[i];
			cnt++;
		}
		return;
	}
	for(int i=0; i<m; i++) {
		if(a[i].num==0) continue;
		b[state]=a[i].c;
		--a[i].num;
		play(state+1);
		++a[i].num;
	}
}
int main(){
	ios::sync_with_stdio(0),cin.tie(0);
	cin >> n >> m;
	for(int i=0; i<m; i++) {
		cin >> a[i].c >> a[i].num;
	}
	sort(a, a+m, [](const A& a, const A& b) {
			return a.c < b.c;
			});
	play();
	cout << cnt << "\n";
	for(int i=0; i<cnt; i++) {
		cout << word[i] << "\n";
	}
	return 0;
}
