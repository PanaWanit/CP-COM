#include<bits/stdc++.h>
using namespace std;
int a[500][500],b[500][500];
int main(){
    int i,j,k,m,n,o,l,p=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        for(j=0;j<5;j++)
            scanf("%d",&a[i][j]);
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            for(k=0;k<n;k++)
                for(l=0;l<n;l++)
                    for(o=0;o<n;o++)
                        if(a[i][0]==a[j][1]&&a[j][1]==a[k][2]&&a[k][2]==a[l][3]&&a[l][3]==a[o][4]){
                                b[p][0]=i;
                                b[p][1]=j;
                                b[p][2]=k;
                                b[p][3]=l;
                                b[p][4]=o;
                                p++;
                        }
    printf("%d\n",p);
    for(i=0;i<p;i++)
    {
        for(j=0;j<5;j++)
        {
            printf("%d ",b[i][j]+1);
        }
        printf("\n");
    }
}
/*
5
1 7 9 2 1
2 8 2 5 2
4 2 7 3 5
5 5 5 4 4
7 1 8 7 7
*/
