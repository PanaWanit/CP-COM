#include<bits/stdc++.h>
using namespace std;
const int mxN = 22;
int yes[mxN];
bool vis[mxN][mxN][mxN];
int A,B,C;
void jikke(int a, int b, int c) {
	if(a>A||b>B||c>C||a<0||b<0||c<0) return;
	if(vis[a][b][c]) return;
	vis[a][b][c]=1;
	if(a==0)
		yes[c]=1;
	jikke(0, b+a, c), jikke(0, b, a+c), jikke(a, 0, b+c);
	jikke(a+b, 0, c), jikke(a+c, b, 0), jikke(a, b+c, 0);
	jikke(A, b-(A-a), c), jikke(a-(B-b), B, c);
	jikke(A, b, c-(A-a)), jikke(a-(C-c), b, C);
	jikke(a, b-(C-c), C), jikke(a, B, c-(B-b));
}
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	cin >> A >> B >> C;
	jikke(0, 0, C);
	for(int i=0; i<=C; ++i)
		if(yes[i]) cout << i << " ";
	cout << "\n";
	return 0;
}
