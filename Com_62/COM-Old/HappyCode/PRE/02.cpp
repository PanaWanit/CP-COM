#include<bits/stdc++.h>
using namespace std;
int main(){
    int w,l;
    double r;
    scanf("%d %d %lf",&w,&l,&r);
    printf("Rectangle is %d\n",w*l);
    printf("Rectangle Perimeter %d\n",2*w+2*l);
    printf("Circle Perimeter is %.2lf\n",M_PI*2*r);
    printf("Circle Are is %.2lf\n",M_PI*r*r);
    printf("Circle Volume is %.2lf\n",M_PI*r*r*r*4/3);
    printf("\"I\'m %% \\.\"");
	return 0;
}
