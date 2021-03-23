#include<stdio.h>
int main()
{
    int y,yb,i,a,b,c,aa,bb,d,all;


    while(1)
    {
        a=1;
        aa=0;
        b=0;
        bb=0;
        scanf("%d",&y);
    if(y!=-1){
     for(i=0;i<y;i++)
    {
        aa+=a;
        aa+=b+1;
        b=a;
        a=aa;
        aa=0;

    }
    all = a+b+1;
    printf("%d %d\n",a,all);

    }

    else break;


    }
return 0;

}


