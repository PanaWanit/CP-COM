#include<stdio.h>
int main(){
int i,x=0,y=0,c=0,n;
scanf("%d",&n);
for(i=1;i<=n;i++){
    if(i>1)
        y=x;
    scanf("%d",&x);
    if(i==1){
        if(x>=80)
            c++;}
    if(i>1){
    if(x>=80||(x>=20&&(x-y>=10)))
        c++;}
}
printf("%d",c);





}
//8 60 5 19 40 90 85 50 60
