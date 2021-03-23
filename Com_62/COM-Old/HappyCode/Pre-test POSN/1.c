#include<stdio.h>
int main()
{
    int d,g,h,a,c,b,i,n,k;
    scanf("%d",&n);
    for(i=0;i<n;i++){
    d=0;
    h=1;
    a=0;
    scanf("%d %d",&g,&k);

        while(h*100<g){
            h--;
            g-=10;
            h+=k;
            a++;
        }
        printf("%d",a);
    }
        return 0;
    }

/*
4
60 10

150 1

430 2

320 2
*/

