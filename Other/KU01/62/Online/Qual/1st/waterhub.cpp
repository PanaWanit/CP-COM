#include<bits/stdc++.h>
using namespace std;
struct A {
	int first, second;
} a[100];
int main() {
	int n,mn=2e9;
	scanf("%d", &n);
	for(int i=0; i<n; i++) {
		scanf("%d %d", &a[i].first, &a[i].second);
	}
	for(int i=0; i<n; i++) {
		for(int j=i+1; j<n; j++) {
			int sum=0;
			for(int k=0; k<n; k++) {
				if(k == i || k == j) continue;
				sum += min(abs(a[i].first - a[k].first) + abs(a[i].second - a[k].second) , abs(a[j].first - a[k].first) + abs(a[j].second - a[k].second));
			}
			mn = min(mn,sum);
		}
	}
	printf("%d", mn);
	return 0;
}
