#include<bits/stdc++.h>
using namespace std;
int n,a[1000];
void play(int w,int l,int state)
{
    if(w==n||l==n)
    {
        for(int i=0;i<state;i++)
        {
            if(a[i]==1) printf("W ");
            else printf("L ");
        }
        printf("\n");
        return;
    }
    a[state]=1;
    play(w+1,l,state+1);
    a[state]=0;
    play(w,l+1,state+1);
}
int main()
{
        int w,l;
        scanf("%d %d %d",&n,&w,&l);
        play(w,l,0);



    return 0;
}
