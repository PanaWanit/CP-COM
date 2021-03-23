/*
    TASK: SMS Thumb
    LANG: CPP
    AUTHOR: Pana
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
char a[150];
char s[10][8];
int now=0;
void sms(int n,int m){
    if(n==1){
        for(int i=0;i<m;i++)
            if(now>0)
                a[now--] = 0;
        return;
    }
    else if(n==7 || n==9) m%=4;
    else m%=3;

    a[now++] = s[n][m];
}
int main(){
    int q,i,j,n,t,h,v;
    char st='A';

    for(i=2;i<=9;i++){
        if(i<=6 || i==8){
            s[i][0] = st+2;
            s[i][1] = st;
            s[i][2] = st+1;
            st+=3;
        }
        else{
            s[i][0]= st+3;
            s[i][1]= st;
            s[i][2]= st+1;
            s[i][3]= st+2;
            st+=4;
        }

    }

    cin >> q >> n >> t;
    sms(n,t);
    i = (n-1)/3 ,j= (n-1)%3 ;
    while(--q){
        cin >> h >> v >> t;
        i+=v,j+=h;
        n = (i*3+j+1);
        sms(n,t);
    }
    if(now==0) cout << "null";
    else printf("%s",a);
    return 0;
}
