#include<bits/stdc++.h>
using namespace std;
list<int> l;
list<int>::iterator it;
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	int n;
	cin >> n;
	l.push_back(999);
	it=l.begin();
	while(n--){
		string a;
		cin >> a;
		if(a[0]=='h')
			it=l.begin();
		if(a[0]=='a') {
			int n;
			cin >> n;
			l.insert(++it, n);
			--it, --it;
		}
		if(a[0]=='n') {
			if(++it==l.end())
				--it;
		}

		if(a[0]=='t')
			it=l.end(), --it;
		if(a[0]=='l') {
			for(auto i=it; i!=l.end(); ++i)
				cout << *i << " ";
			cout << "\n";
			it=l.end(), --it;
		}
		if(a[0]=='r') {
			++it;
			if(it==l.end()) --it;
			else {
				it=l.erase(it);
				--it;
			}
		}
		if(a[0]=='c') {
			cout << *it << "\n";
		}
	}
	return 0;
}
