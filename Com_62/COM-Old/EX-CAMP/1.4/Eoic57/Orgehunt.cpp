#include<bits/stdc++.h>
using namespace std;
int k,l,z,cnt=0,cl,j=1;
char a[100000000];
void play(int state){
    int i;
    if(state==j){
        cnt++;
        //printf("[%s]\n",a);
        if(cnt==k){
            printf("%s",a);
            exit(0);
        }

        return ;
    }
    a[state]='4';
    play(state+1);
    a[state]='7';
    play(state+1);
}
int main(){
    int i,mul=2;
    scanf("%d",&k);
    while(1){
        if(k<=mul)
            break;
        k-=mul;mul*=2;j++;
    }

   // printf("lak:%d\nlumdub:%d\n",j,k);
    play(0);


    return 0;
}
