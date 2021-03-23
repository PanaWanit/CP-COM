#include<bits/stdc++.h>
using namespace std;
int chbx[20];
int main(){
    int q,j;
    int n,num,cnt;
    scanf("%d",&q);
    for(int i=1,cnt=0;i<=q;i++){
        int mul=0,num;
        memset(chbx,0,sizeof chbx);
        scanf("%d",&n);
        if(!n) {printf("Case #%d: INSOMNIA\n",i);continue;}

        while(1){
            mul++;
            num=n*mul;
            while(num){
                chbx[num%10]=1;
                num/=10;

            }
            for(j=0;j<10;j++)
                if(chbx[j]) cnt++;

            if(cnt==10){printf("Case #%d: %d\n",i,n*mul) ;break;}
            else cnt=0;

        }

        }

    }


