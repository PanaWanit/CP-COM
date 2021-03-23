#include<bits/stdc++.h>
#define ll long long
using namespace std;
int d[7];
void sol(){
   string a;
   for(int i=1;i<=6;i++)
      d[i] = i;
   cin >> a;
   for(char c:a){
      int one ,two , three ,four;
      if(c == 'F'){
         one = d[1] , two = d[2] , three = d[5] , four = d[6];
         d[2] = one , d[1] = three , d[5] = four , d[6] = two;
      }
      else if(c == 'B'){
         one = d[1] , two = d[2] , three = d[5] , four = d[6];
         d[1] = two , d[2] = four , d[5] = one , d[6] = three; 
      }
      else if(c == 'L'){
         one = d[1] , two = d[3] , three = d[6] , four = d[4];
         d[1] = four , d[3] = one , d[6] = two , d[4] = three; 
      }
      else if(c == 'R'){
         one = d[1] , two = d[3] , three = d[6] , four = d[4];
         d[1] = two , d[4] = one , d[6] = four , d[3] = three;
      }
      else if(c == 'C'){
         one = d[2] , two = d[3] , three = d[5] , four = d[4];
         d[2] = four , d[3] = one , d[5] = two , d[4] =three;
      }
      else if(c == 'D'){
         one = d[2] , two = d[3] , three = d[5] , four = d[4];
         d[2] = two , d[4] = one , d[5] = four , d[3] = three; 
      }

   }

   cout << d[2] << " ";
}
int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n;
  cin >> n;
  while(n--)
     sol();
  return 0;
}
