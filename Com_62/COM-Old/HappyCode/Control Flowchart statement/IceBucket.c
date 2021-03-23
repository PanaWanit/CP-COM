#include<stdio.h>
int main(){
int n=0,g=0,k=0,h=1,cnt=0;
scanf("%d",&n);
for(int i=0;i<n;i++)
{
    scanf("%d %d",&g,&k);
    h=1;
    while(g>h*100)
    {
        h-=1;
        h+=k;
        g-=10;
        cnt++;
    }

        printf("%d",cnt),cnt=0;
}


return 0;
}
