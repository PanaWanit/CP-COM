/*
  TASK: worldcup
  AUTHOR: Pna_Wan
  LANG: C++
  SCHOOL: Gaiyang
*/
#include<bits/stdc++.h>
using namespace std;
struct A{
  string name;
  int score;
};
int win[5],lose[5];
int score[5][5];
A a[5];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> a[1].name >> a[2].name >> a[3].name >> a[4].name;
    int i,j;
    for(i=1;i<=4;i++){
        for(j=1;j<=4;j++){
          cin >> score[i][j];
          win[i]+=score[i][j];
          lose[j]+=score[i][j];
        }
    }
    for(i=1;i<=4;i++){
        for(j=i+1;j<=4;j++){
          if(score[i][j] > score[j][i]) a[i].score+=3;
          else if(score[j][i] > score[i][j]) a[j].score+=3;
          else if(score[i][j] == score[j][i]) a[i].score++,a[j].score++;
        }
    }
    for(i=1;i<=4;i++){
        for(j=i+1;j<=4;j++){
            if(a[i].score < a[j].score) swap(a[i],a[j]);
            if(a[i].score == a[j].score){
                if(win[i]-lose[i] < win[j]-lose[j] ) swap(a[i],a[j]);
                else {
                    if(win[i] < win[j]) swap(a[i],a[j]);
                }

            }
        }
    }
    for(i=1;i<=4;i++) cout << a[i].name << " " << a[i].score << endl;

    return 0;
}