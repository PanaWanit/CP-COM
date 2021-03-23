/*
    TASK: quadeq
    LANG: CPP
    AUTHOR: Pana
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int A,B,C,a,b,c,d,i,j,k,l,ch=0;
    int aa,bb,cc,dd;
    cin >> A >> B >> C;
    for(c=1;c<=100 & ch==0 ;c++){
        for(d=-100;d<=100 && ch==0;d++){
            if(c==0 || d==0) continue;
            if(A%c!=0 || C%d!=0) continue;
            a = A/c;
            b = C/d;
           // cout << a << " " << b << " " << c << " " << d <<endl;
            if(B==a*d+b*c ) aa=a,bb=b,cc=c,dd=d,ch=1;
        }
    }
    if(ch==0) cout << "No Solution";
    else cout << cc <<" " << dd <<" " << aa << " " << bb;
    return 0;
}
/*
A B C
(a b) (c d)
A=ac

>>>a=A/c

B=ad+bc

C=bd

>>>b=C/d
*/
