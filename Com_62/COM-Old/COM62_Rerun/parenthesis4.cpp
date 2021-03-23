#include<bits/stdc++.h>
#define ll long long
using namespace std;
char a[30];
int n;
vector<string> g;
void play(int state){
  if(state == 2*n){
    g.push_back(a);
  }

}
int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  cin >> n;
  play(0);
  cout << g.size() << "\n";
  for(string x:g) cout << x << "\n";
  return 0;
}
