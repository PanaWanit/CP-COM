#include<iostream>
using namespace std;
int a[10001][10001],n[10001][2];
int main(){
    int r,b,i,j,q,is,js,cnt=0;
    cin >> r >> b;
    for(i=1;i<r;i++){
        for(j=1;j<b;j++)
            cin >> a[i][j];
    }
    cin >> q;
    for(i=0;i<q;i++)
        for(j=0;j<2;j++) cin >> n[i][j];
    for(i=1;i<r;i++){
        for(j=1;j<b;j++){
            if(a[i][j]==1){
                is=i;
                js=j;
                cnt++;
            }
        }
    }
    for(i=1;i<=4;i++){
        a[is][js-i]=2;
        a[is][js+i]=2;
        a[is+i][js]=2;
        a[is-i][js]=2;
    }
    for(i=1;i<=4;i++){
        for(j=1;j<=4;j++){
            a[is-j][js-i]=2;
            a[is+j][js+i]=2;
            a[is+j][js-i]=2;
            a[is-j][js+i]=2;
        }
    }
    for(i=0;i<q;i++){
        if(a[n[i][0]][n[i][1]]==2)
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }

    return 0;
}
