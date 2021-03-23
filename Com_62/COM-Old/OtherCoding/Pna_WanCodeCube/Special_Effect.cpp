/*
    TASK: Special effect
    AUTHOR: Pna_Wan
    LANG: C++
    SCHOOL: Gaiyang
*/
#include<bits/stdc++.h>
#define ll long long
using namespace std;
struct A{
  int i,j;
  char d;
};
const int mxN = 100;
int di[]={0,0,-1,1},dj[]={1,-1,0,0},dir,r,c;
char a[mxN][mxN];
vector<A> g;
void play(int i,int j){
    if(a[i][j]!='+' && a[i][j] != '-' && a[i][j]!='|' && a[i][j]!='.' && a[i][j]!='B') return;
    if(dir <= 1 && a[i][j]=='.') a[i][j]='-';
    else if(dir <=1 && a[i][j]=='|') a[i][j] = '+';
    else if(dir > 1 && a[i][j]=='.') a[i][j] = '|';
    else if(dir > 1 && a[i][j] == '-') a[i][j] = '+';

    int ii,jj;
    ii = i +di[dir] , jj =j + dj[dir];
    if(ii >= r || ii < 0 || jj >=c || jj < 0) return  ;
    play(ii,jj);

}
int main(){
    int i,j;
    scanf("%d %d",&c,&r);
    for(i=0;i<r;i++){
      for(j=0;j<c;j++){
          scanf(" %c",&a[i][j]);
          char  x = a[i][j];
          if(x=='>' || x == '<' || x == '^' || x=='V'){
            g.push_back({i,j,x});
          }
          if(a[i][j]=='B') a[i][j]='*';
      }
    }
    for(A x:g ){
      if(x.d == '>') dir = 0;
      if(x.d == '<') dir = 1;
      if(x.d == '^') dir = 2;
      if(x.d == 'V') dir = 3;
      int ii = x.i + di[dir] , jj = x.j + dj[dir];
      if(ii >= r || ii < 0 || jj >=c || jj < 0) continue;
      play(ii,jj);
    }
    for(i=0;i<r;i++)
      printf("%s\n",a[i]);
    return 0;
}
/*
5 5
.....
>....
...._
>.B/.
__/..
*/
