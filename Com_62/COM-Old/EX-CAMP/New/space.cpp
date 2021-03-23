#include<bits/stdc++.h>
using namespace std;
int n,a[1000],b[1000];
void play(int state,int k)
{
    if(k==n)
    {
        int i,j;
        for(i=n-1;i>=0;i--)
        {
            if(a[i]==1) continue;

           for(j=0;j<n;j++)
            {
                printf("%d",a[j]);
            }
            printf(" ");
           for(j=0;j<n;j++)
           {
               if(i==j) printf("1");
               else printf("%d",a[j]);

           }
           printf("\n");
        }

        //printf("\n");
        return;
    }
    a[state]=0;
    play(state+1,k+1);
    a[state]=1;
    play(state+1,k+1);

}
int main(){
    scanf("%d",&n);
    play(0,0);
    return 0;
}
