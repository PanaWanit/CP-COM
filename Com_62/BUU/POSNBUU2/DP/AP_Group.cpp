/*
    TASK: AP_Group
    LANG: CPP
    AUTHOR: Pana
    SCHOOL: RYW
*/
#include<bits/stdc++.h>
using namespace std;
int mic[100005];
pair<int,int> a[100005];
int main(){
    int q,n,i,att,now=0;
    scanf("%d",&q);
    while(q--){
        now=0;
        scanf("%d",&n);
        for(i=0;i<n;i++){
            scanf("%d %d",&a[i].first,&a[i].second);
            a[i].second *=-1;
        }
        sort(a,a+n);
        for(i=0;i<n;i++){
            att = upper_bound(mic,mic+now,a[i].second) - mic;
            if(att==now) now++;
            mic[att] = a[i].second;
        }
        printf("%d\n",now);
    }
    return 0;
}
