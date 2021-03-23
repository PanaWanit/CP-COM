#include<stdio.h>

int main(){
int z,x,c,v,i;
int a,s,d,f;

scanf("%d %d %d %d",&z,&x,&c,&v);
printf("%d\t%d\t%d\t%d\n",z,x,c,v);

while(z!=0&&x!=0&&c!=0&&v!=0){
a=z-x;
s=x-c;
d=c-v;
f=v-z;
if(a<0){
   a*-1;
    printf("%d\t",a);
    z=a;
    }
 else{printf("%d\t",a);z=a;}


if(s<0){
s*-1;
printf("%d \t",s);x=s;}
else{printf("%d\t",s);x=s;}


if(d<0){
   d*-1;
    printf("%d \t",d);c=d;
    }
else{printf("%d\t",d);c=d;}
if(f<0){
   f*-1;
    printf("%d \t",f);f=v;
    }
else{printf("%d \n",f);f=v;}


}


return 0;

}
