/*
 	TASK : Merge Sort (Ascending Order)
	AUTHOR : Pana Wanit
	LANG : C++
	SCHOOL : N/a
 */
#include<bits/stdc++.h>
using namespace std;
//Divide and Conquerer alway NlogN time
const int mxN = 1e5;
int n,mem[mxN]; //for mem 
void merge_sort(int arr[], int l , int r) {
	if(l == r) return;
	int mid = (l+r)/2;
	merge_sort(arr,l,mid);	
	merge_sort(arr,mid+1,r);
	int itL = l , itR = mid+1,p=0; //pointer itL -> l , itR -> mid , pointer of mem 
	while(itL <= mid && itR <= r) {
		if( arr[itL] < arr[itR] ) mem[p++] = arr[itL++];
		else mem[p++] = arr[itR++];
	}
	while(itL <= mid){ // if l pointer(itL) != mid ( mem size != r-l+1 )
		mem[p++] = arr[itL++];
	}
	while(itR <= r){ // r porinter(itR) != r (mem size != r-l+1)
		mem[p++] = arr[itR++];
	}
	for(int i=0; i<p; i++){ // p == mem size (r-l+1)
		arr[i+l] = mem[i];
	}
	return;
}
int main(){
	ios::sync_with_stdio(0), cin.tie(0);
	cin >> n;
	int arr[n];
	for(int i=0; i<n; i++){
		cin >> arr[i];
	}
	merge_sort(arr,0,n-1);
	for(int i=0; i<n; i++){
		cout << arr[i] << " ";
	}
	cout << "\n";
	return 0;
}
