#include <bits/stdc++.h>

int main(){
int x,y;
scanf("%d %d",&x,&y);

for(x=x;x<=y;x++)
{
    if((x%4==0 && x%100!=0)|| x%400==0    ){
        printf("%d ",x);
    }
}



return 0;
}
