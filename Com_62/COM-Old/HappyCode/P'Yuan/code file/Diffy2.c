#include<stdio.h>
#include<stdlib.h>

int main(){
int z,x,c,v,i;
int a,s,d,f;
scanf("%d %d %d %d",&z,&x,&c,&v);
printf("%d\t%d\t%d\t%d\n",z,x,c,v);

while(z!=0||x!=0||c!=0||v!=0){
    a=abs(z-x);
    s=abs(x-c);
    d=abs(c-v);
    f=abs(v-z);

    printf("%d\t",a);z=a;
    printf("%d\t",s);x=s;
    printf("%d\t",d);c=d;
    printf("%d\n",f);v=f;

i++;




}
printf("%d",i);

return 0;
}
