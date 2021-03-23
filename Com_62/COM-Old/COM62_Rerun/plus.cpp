#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int mxN = 5003;
char aa[mxN] , bb[mxN];
int ans[mxN];
void pl(string a,string b){
    int len = a.size();
    for(int i=0;i<=5001;i++)
        aa[i] = '0' , bb[i] = '0';
    for(int i=5001,x=0;i>=0;i--,x++){
      if(len-x-1 < 0 ) break;
      if(a[len-x-1]=='-') continue;
      aa[i] = a[len-x-1];
    }
    len = b.size();
    for(int i=5001,x=0;i>=0;i--,x++){
      if(len-x-1 < 0 ) break;
      if(b[len-x-1]=='-') continue;
      bb[i] = b[len-x-1];
    }
    int tod = 0;
    for(int i=5001;i>=0;i--){
      int x = (aa[i]-'0') + (bb[i]-'0') + tod;
      ans[i] = x%10;
      tod = x/10;
    } 
    int st;
    for(int i=0;i<=5001;i++){
      if(ans[i]!=0){st=i;break;} 
    }
    for(int i=st;i<=5001;i++)
      cout << ans[i] ;
    
}
void mi(string a,string b,int minu){
  int lena = a.size() , lenb = b.size(),len;
  bool ch=0;
  if(minu==0){
    for(int i=1;i<lena;i++)
      a[i-1] = a[i];
    a.pop_back();
    lena-=1;
  }
  else{
    for(int i=1;i<lenb;i++)
      b[i-1] = b[i];
    lenb-=1;
    b.pop_back();
  }
  if(a==b){
    cout << 0;
    return;
  }
  if(lenb > lena){
    swap(a,b);ch=1;
    swap(lena,lenb);
    if(minu==1) cout << "-";
  }
  else if(lena == lenb){
    for(int i=0,ch=0;i<lena ;i++){
      if(a[i] > b[i]){
        break;
      }
      else if(b[i] > a[i]){
        swap(lena,lenb);
        swap(a,b);ch=1;
        if(minu==1) cout << "-";
        break;
      }
      
    }
  }
  else if(lena > lenb && minu == 0) cout << "-";
  len = a.size();
  for(int i=0;i<=5001;i++)
        aa[i] = '0' , bb[i] = '0';
    for(int i=5001,x=0;i>=0;i--,x++){
      if(len-x-1 < 0 ) break;
      if(a[len-x-1]=='-') continue;
      aa[i] = a[len-x-1];
    }
    len = b.size();
    for(int i=5001,x=0;i>=0;i--,x++){
      if(len-x-1 < 0 ) break;
      if(b[len-x-1]=='-') continue;
      bb[i] = b[len-x-1];
    }

  for(int i=5001;i>=0;i--){  
    if(aa[i] >= bb[i]) ans[i] =(int)(aa[i]-bb[i]);
    else{
      ans[i] =(int)(aa[i] - bb[i] + 10);
      for(int j=i-1;j>=0;j--){
        if(aa[j]=='0') aa[j]='9';
        else{
          aa[j]-=1;break;
        }
      }
            
    }
  }
  int st;
    for(int i=0;i<=5001;i++){
      if(ans[i]!=0){st=i;break;} 
    }
    for(int i=st;i<=5001;i++)
      cout << ans[i] ;

}
int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  string a,b;
  cin >> a >> b;
  if(a=="0" && b=="0"){
    cout << 0;
    return 0;
  }
  if(a[0]=='-' && b[0]=='-') {
    cout << "-";
    pl(a,b);
  }
  else if(a[0]!='-' && b[0]!='-'){
    pl(a,b);
  }
  else if(a[0]=='-') mi(a,b,0);
  else mi(a,b,1);
  return 0;
}
