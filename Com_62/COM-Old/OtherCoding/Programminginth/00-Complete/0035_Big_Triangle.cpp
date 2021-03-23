/*
    TASK:
    LANG: CPP
    AUTHOR: Pana
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
struct A{
    int x,y;
};
A a[101];
int main(){
    int i,j,k,n;
    double x1,x2,x3,y1,y2,y3;
    double mx=-2e9,num;
    cin >> n;
    for(i=0;i<n;i++) cin >> a[i].x >> a[i].y;

    for(i=0;i<n-2;i++){
        for(j=i+1;j<n-1;j++){
            for(k=j+1;k<n;k++){
                x1 = a[i].x , y1 = a[i].y;
                x2 = a[j].x , y2 = a[j].y;
                x3 = a[k].x , y3 = a[k].y;
                num=abs(x1*y2 + x2*y3 + x3*y1 - y1*x2 - y2*x3 - y3*x1)/2;
                mx = max(num,mx);
            }
        }
    }
    printf("%.3lf",mx);
    return 0;
}
