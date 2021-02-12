#include<bits/stdc++.h>
using namespace std;

list<int> l;
list<int>::iterator it;
int main() {
	ios::sync_with_stdio(false), cin.tie(nullptr);
	l.push_back(999);
	it = l.begin();
	int t;
	cin >> t;
	while(t--) {
		string opr;
		cin >> opr;
		switch(opr[0]) {
			case 'h':
				it = l.begin();
				break;
			case 'n':
				it++;
				if(it==l.end()) it--;
				break;
			case 't':
				it = l.end();--it;
				break;
			case 'a':
				int x;
				cin >> x;
				l.insert(++it, x);
				--it, --it;
				break;
			case 'r':
				++it;
				if(it!=l.end()) it = l.erase(it);
				--it;
				break;
			case 'c':
				cout << *it << "\n";
				break;
			default:
				for(; it!=l.end(); it++)
					cout << *it << " " ;
				cout << "\n";
				--it;
		}
	}
	return 0;
}
