/*
 	TASK : 49_Sudoku 2
	AUTHOR : Pana Wanit
	LANG : C++
	SCHOOL : RYW
 */
#include<bits/stdc++.h>
using namespace std;
int a[9][9], used_row[9][10], used_col[9][10], used_box[9][10];
void play(int r, int c, int box) {
	for(int i=r; i<r+3; i++) {
		for(int j=c; j<c+3; j++) {
			if(a[i][j] != 0 ) continue;
			for(int k=1; k<=9; k++)
				if(!used_row[i][k]&&!used_col[j][k]&&!used_box[box][k]) {
					a[i][j] = k, used_row[i][k] = used_col[j][k] = used_box[box][k] = 1;
					break;
				}
		}
	}
}
int main(){
	ios::sync_with_stdio(false), cin.tie(nullptr);
	for(int i=0; i<9; i++) {
		for(int j=0; j<9; j++) {
			cin >> a[i][j];
			if(a[i][j]) used_row[i][a[i][j]] = used_col[j][a[i][j]] = used_box[3*(i/3)+j/3][a[i][j]] = 1;
		}
	}
	for(int i=0, now=0; i<9; i+=3) {
		for(int j=0; j<9; j+=3, now++) {
			play(i, j, now);
		}
	}
	cerr << endl;
	for(int i=0; i<9; i++) {
		for(int j=0; j<9; j++)
			cout << a[i][j] << " ";
		cout << "\n";
	}
	return 0;
}
