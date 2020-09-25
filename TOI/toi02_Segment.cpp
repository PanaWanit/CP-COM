/*
    TASK: Seven Segment
    LANG: C++17
    AUTHOR: Pana Wanit
    SCHOOL: N/a
*/
#include<bits/stdc++.h>
using namespace std;
char sa[3][350],sb[3][350];
char ch[350];
int main(){
	int aa=0,bb=0;
    int a,b,i,j,k;
    scanf("%d %d",&a,&b);
    gets(sa[0]);
    for(i=0;i<3;i++) gets(sa[i]);
    for(i=0;i<3;i++) gets(sb[i]);
    int lena = strlen(sa[1]),lenb = strlen(sb[1]);
    int now,kk=1;
    for(i=0;i<a-1;i++) kk*=10;
    for(k=0;k<lena;k+=4){
        now=0;
        for(i=0;i<3;i++){
            for(j=k;j<k+3;j++){
                if(sa[i][j]=='|' || sa[i][j] == '_')
                ch[now++] = sa[i][j];
            }
        }

        if(now==2) aa += 1*kk;
        else if(now == 3)  aa += 7*kk;
        else if(now == 7)  aa += 8*kk;
        else if(now == 4)  aa += 4*kk;
        else if(now == 5){
            if(ch[1]=='|') aa += 5*kk;
            else if(ch[3] == '|') aa += 2*kk;
            else aa += 3*kk;
        }
        else if(now==6){
            if(ch[2] == '|' ) aa += 0*kk;
            else if(sa[2][k] == '|') aa +=6*kk;
            else aa+= 9*kk;
        }
        kk/=10;
    }
    kk=1;for(i=0;i<b-1;i++) kk*=10;
    for(k=0;k<lenb;k+=4){
        now=0;
        for(i=0;i<3;i++){
            for(j=k;j<k+3;j++){
                if(sb[i][j]=='|' || sb[i][j] == '_')
                ch[now++] = sb[i][j];
            }
        }

        if(now==2) bb += kk;
        else if(now == 3)  bb += 7*kk;
        else if(now == 7)  bb += 8*kk;
        else if(now == 4)  bb += 4*kk;
        else if(now == 5){
            if(ch[1]=='|') bb += 5*kk;
            else if(ch[3] == '|') bb += 2*kk;
            else bb += 3*kk;
        }
        else if(now==6){
            if(ch[2] == '|' ) bb += 0*kk;
            else if(sb[2][k] == '|') bb +=6*kk;
            else bb += 9*kk;
        }
        kk/=10;
    }

    printf("%d",aa+bb);
    return 0;
}
