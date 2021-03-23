/*
    TASK: Prime Palindrome
    AUTHOR: Pna_Wan
    LANG: C++
    SCHOOL: Gaiyang
*/
#include<bits/stdc++.h>
#define ll long long
using namespace std;
char buffer[11];
int mark[1100000];
ll prime[100000];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int i,j,n,k=1,len;
    for(i = 3; i <= sqrt(1100000) ; i+=2){
      if(mark[i]) continue;
      for(j=i*i ; j<= 1100000 ; j+=i) mark[j] = 1;
    }
    prime[0] = 2;
    for(i = 3 ; i <= 1100000 ; i+=2){
        if(mark[i]) continue;
        prime[k++] = i;
    }
    cin >> n;
    for(i=0 ; i < k ; i++){
      if(prime[i] < n ) continue;
      len = sprintf(buffer,"%d",prime[i]);
      for(j=0;j<len/2;j++){
        if(buffer[j] != buffer[len-j-1]) break;
      }
      if(j==len/2){
        cout << prime[i];
        exit(0);
      }
    }
    return 0;
}
