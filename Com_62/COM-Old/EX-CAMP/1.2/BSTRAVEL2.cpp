#include<bits/stdc++.h>
using namespace std;
int node[310],l[310],r[310];
void pre(int i){
    if(!node[i]) return;
    printf("%d ",node[i]);
    pre(l[i]);
    pre(r[i]);

}
void pos(int i){
    if(!node[i]) return;
    pos(l[i]);
    pos(r[i]);
    printf("%d ",node[i]);

}
void inf(int i){
    if(!node[i]) return;
    inf(l[i]);
    printf("%d ",node[i]);
    inf(r[i]);


}
int main(){
    int n,i,run;
    scanf("%d %d",&n,&node[1]);
    for(i=2;i<=n;i++){
        scanf("%d",&node[i]);
        run=1;
        while(1){
            if(node[i] < node[run]){
                if(!l[run]){
                    l[run] = i;
                    break;
                }
                run=l[run];
            }
            else if(node[i] > node[run]){
                if(!r[run]){
                    r[run]=i;
                    break;
                }
                run=r[run];
            }
        }
    }
    pre(1);printf("\n");
    pos(1);printf("\n");
    inf(1);printf("\n");
}
