#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  int type,n,x;
  cin >> type >> n;
  if(type==1){
    int a[n];
    for(int i=0;i<n;i++) cin >> a[i];
    sort(a,a+n);
    for(int i=0;i<n;i++) cout << a[i] << " ";cout << "\n";
    for(int i=n-1;i>=0;i--) cout << a[i] << " ";
  }
  else if(type==2){
    double a[n];
    for(int i=0;i<n;i++) cin >> a[i];
    sort(a,a+n);
    for(int i=0;i<n;i++) printf("%.0lf ",a[i]);printf("\n");
    for(int i=n-1;i>=0;i--) printf("%.0lf ",a[i]);
  }  
  else if(type==3){
    char a[n];
    for(int i=0;i<n;i++) cin >> a[i];
    sort(a,a+n);
    for(int i=0;i<n;i++) cout << a[i] << " ";cout << "\n";
    for(int i=n-1;i>=0;i--) cout << a[i] << " ";
  }
  else{
    string a[n];
    for(int i=0;i<n;i++) cin >> a[i];
    sort(a,a+n);
    for(int i=0;i<n;i++) cout << a[i] << " " ; cout << "\n";
    for(int i=n-1;i>=0;i--) cout << a[i] << " "; 
  }
    
  return 0;
}
