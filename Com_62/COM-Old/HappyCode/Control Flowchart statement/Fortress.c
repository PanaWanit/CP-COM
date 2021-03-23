#include<stdio.h>
int cnt;
int main()
{
    int a,b,c,n,m;

    for(int i=0;i<20;i++){
        scanf("%d %d",&m,&n);
        b=(m/2)-n;
        if(b<0||b>n)
        printf("0\n");
    else
        printf("%d\n",n-b+1);
    }
    return 0;
    }

/*
40 15
30 12
60 40
50 18
66 26
36 11
36 16
36 18
56 20
56 22
44 18
32 14
42 20
36 16
38 14
38 16
34 20
36 16
44 14
34 14




*/
