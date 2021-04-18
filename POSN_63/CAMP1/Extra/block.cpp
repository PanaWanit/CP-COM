#include<bits/stdc++.h>
using namespace std;
int r,c,score=0, di[]={0, 1, -1, 0}, dj[]={1, 0, 0, -1};
char a[15][15];
void scoring(int ni, int nj, char ch) {
	a[ni][nj]='-';
	score+=5;
	for(int i=0; i<4; ++i) {
		int ii = ni+di[i], jj = nj+dj[i];
		if(ii>=r||jj>=c||ii<0||jj<0) continue;
		if(a[ii][jj]==ch)
			scoring(ii, jj, ch);
	}
}
void drop_table() {
	for(int j=0; j<c; ++j) {
		for(int i=r-1; i>=0; --i) {
			if(a[i][j]=='-') {
				for(int k=i-1; k>=0; --k) {
					if(isalpha(a[k][j])) {
						swap(a[k][j], a[i][j]);
						break;
					}
				}
			}
		}
	}
}
void opr() {
	int x,y,dir;
	char l;
	scanf("%d %d %c", &x, &y, &l);
	dir = (l=='L'?-1:1);
	if(!isalpha(a[x][y])) {
		score-=5;
		return;
	}
	if(y+dir<0||y+dir>=c) {
		score -= 5;return;
	}
	if(a[x][y+dir]!='-') {
		score-=5;return;
	}
	swap(a[x][y], a[x][y+dir]);
	drop_table();
	for(int i=r-1; i>=0; --i) {
		for(int j=0; j<c; ++j) {
			if(!isalpha(a[i][j])) continue;
			bool ch=0;
			for(int k=0; k<4; ++k) {
				int ii = i+di[k], jj = j+dj[k];
				if(ii>=r||jj>=c||ii<0||jj<0) continue;
				if(a[ii][jj]==a[i][j]) {
					ch=1;
					break;
				}
			}
			if(ch) scoring(i, j, a[i][j]),drop_table();
		}
	}
}
int main() {
	scanf("%d %d", &r, &c);
	for(int i=0; i<r; ++i) {
		for(int j=0; j<c; ++j)
			scanf(" %c", &a[i][j]);
	}
	int t;
	scanf("%d", &t);
	while(t--) {
		opr();
	}
	printf("%d\n", score);
	for(int i=0; i<r; ++i) {
		for(int j=0; j<c; ++j)
			printf("%c ", a[i][j]);
		printf("\n");
	}
	return 0;
}
