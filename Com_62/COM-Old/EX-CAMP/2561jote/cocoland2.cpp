#include<bits/stdc++.h>
using namespace std;
struct A{
    int type,quality,date,ne;
    bool operator<(const A&o) const{
        if(quality!=o.quality) return quality > o.quality;
        else if(type!=o.type) return type > o.type;
    }
};
priority_queue<A> he;
int main()
{
    int q,type,x,dead,ts,y;
    scanf("%d",&q);
    for(int i=0;i<q;i++)
    {

        scanf("%d",&type);
        if(type==1)
        {
            scanf("%d %d",&x,&dead);
            he.push({2,x,dead,0});

        }
        else if(type==2)
        {
            scanf("%d",&x);
            he.push({3,x,0,x});

        }
        else if(type==3)
        {
            scanf("%d %d %d",&x,&ts,&y);
            he.push({1,x,ts,y});
        }
        else
        {
            if(he.empty()) printf("GREAN\n");
            else
            {
                while(1){
                    if(he.top().type==2&&he.top().date<=i) he.pop();
                    else if(he.top().type==1&&he.top().date<=i){
                        int z=he.top().ne;
                        he.pop();
                        he.push({1,z,1000000,0});

                    }
                    else break;

                }
                printf("%d\n",he.top().quality);
                he.pop();
            }
        }

    }
    return 0;
}
/*
11
2 5
4
4
1 10 5
2 15
4
3 20 8 40
2 30
2 45
4
4
*/
