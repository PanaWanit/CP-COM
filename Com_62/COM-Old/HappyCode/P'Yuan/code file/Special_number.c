#include<stdio.h>
#include<math.h>
int a[10],b[11],c[10],d,e,f,n=1;
int main(){
for(int i=0;i<5;i++)
    scanf("%d",&a[i]);
for(int i=0;i<5;i++){
        c[i]=a[i];
        if(a[i]==10000)
            b[0]=pow(a[i]/10000,n),n++;
        if(a[i]>=1000)
            b[1]=pow(a[i]/1000,n),a[i]=a[i]-((a[i]/1000)*1000),n++;
        if(a[i]>=100)
            b[2]=pow(a[i]/100,n),a[i]=a[i]-((a[i]/100)*100),n++;
        if(a[i]>=10)
            b[3]=pow(a[i]/10,n),a[i]=a[i]-((a[i]/10)*10),n++;
        if(a[i]>=1)
            b[4]=pow(a[i],n);

n=1;
    if(c[i]==b[0]+b[1]+b[2]+b[3]+b[4])
        printf("Y");
    else
        printf("N");
b[0]=b[1]=b[2]=b[3]=b[4]=0;

}
// 89 98 518 815 1676
//1676 815 518 98 89
}

