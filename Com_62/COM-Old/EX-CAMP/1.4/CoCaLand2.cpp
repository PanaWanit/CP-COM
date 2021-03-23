#include<bits/stdc++.h>
using namespace std;
struct A
{
    int t,q,d,ne;
    bool operator <(const A&o) const
    {
        if(q!=o.q)
            return q>o.q;
        else if(t!=o.t)
            return t>o.t;
    }
};
priority_queue<A> he;
int main()
{
    int n,type,q,nw,d,i;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&type);
        if(type==1)
        {
            scanf("%d %d",&q,&d);
            he.push({2,q,d,0});
        }
        else if(type==2)
        {
            scanf("%d ",&q);
            he.push({3,q,0,q});
        }
        else if(type==3)
        {
            scanf("%d %d %d",&q,&d,&nw);
            he.push({1,q,d,nw});
        }
        else
        {
            if(he.empty())
                printf("GREAN\n");
            else
            {
                while(1)
                {
                    if (he.top().t==2&&he.top().d<=i)
                    {
                        he.pop();
                    }
                    else if (he.top().t==1&&he.top().d<=i)
                    {
                        int z=he.top().ne;

                        he.pop();
                        he.push({1,z,1000000,0});
                    }
                    else
                        break;
                }
                printf("%d\n",he.top().q);
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
