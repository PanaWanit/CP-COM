/*
 	TASK : Inversion Count
	AUTHOR : Pana Wanit
	LANG : C++
	SCHOOL : N/a
 */
#include<bits/stdc++.h>
using namespace std;
const int mxN = 1e5+1;
int arr[mxN], mem[mxN], cnt=0;
void merge_sort(int a[], int l,  int r) {
	if(l == r) return;
	int mid = (l+r)/2;
	merge_sort(arr, l, mid) , merge_sort(arr, mid+1, r);
	int pl = l , pr = mid+1, pall = l;
	while(pl<=mid&&pr<=r) {
		if(a[pl] <= a[pr]) mem[pall++] = a[pl++];
		else mem[pall++] = a[pr++] , cnt += (mid-pl+1);
	}
	while(pl<=mid) mem[pall++] = a[pl++];
	while(pr<=r) mem[pall++] = a[pr++];
	for(int i=l; i<=r; i++) a[i] = mem[i];
}
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int n;
	cin >> n;
	for(int i=0; i<n; i++) {
		cin >> arr[i];
	}
	merge_sort(arr, 0, n-1);
	cout << cnt << "\n";
	return 0;
}
