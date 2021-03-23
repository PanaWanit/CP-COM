/*
    TASK: UpKahn
    LANG: CPP
    AUTHOR: Pana
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
vector<int> a,g[100100];
priority_queue<int> b;
int in[100100];
int main(){
    int q,n,m,r,s,i;
    scanf("%d",&q);
    while(q--){
        scanf("%d %d",&n,&m);
        while(m--){
            scanf("%d %d",&r,&s);
            g[r].push_back(s),in[s]++;
        }
        for(i=1;i<=n;i++){
            if(!in[i]) b.push(-i);
        }
        while(!b.empty()){
            r=b.top()*-1;
            a.push_back(-r);

            b.pop();
            for(auto x: g[r]){
                in[x]--;
                if(in[x]==0)
                    b.push(-x);
            }
        }
        if(a.size()==n){
            printf("Yes ");
            for(auto x: a){
                printf("%d ",-x);
            }
                printf("\n");
        }
        else printf("No\n");
        memset(in,0,sizeof in);
        for(i=1;i<=n;i++)
            g[i].clear();
        a.clear();

    }
    return 0;
}
/*
2
5 5
1 2
1 3
2 4
3 5
4 5
5 6
1 2
1 3
2 4
3 5
4 5
4 1
*/
