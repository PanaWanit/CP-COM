/*
    TASK: DATUM
    AUTHOR: Pna_Wan
    LANG: C++
    SCHOOL: Gaiyang
*/
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
	int d,m,cnt;
	cin >> d >> m;
	if(m==1) cnt = d;
	else if(m==2) cnt =  d+31;
	else if(m==3) cnt =  d+31+28;
	else if(m==4) cnt =  d+31+28+31;
	else if(m==5) cnt =  d+31+28+31+30;
	else if(m==6) cnt =  d+31+28+31+30+31;
	else if(m==7) cnt =  d+31+28+31+30+31+30;
	else if (m==8) cnt = d+31+28+31+30+31+30+31;
	else if(m==9) cnt  = d+31+28+31+30+31+30+31+31;
	else if(m==10) cnt = d+31+28+31+30+31+30+31+31+30;
	else if(m==11) cnt = d+31+28+31+30+31+30+31+31+30+31;
	else if(m==12) cnt = d+31+28+31+30+31+30+31+31+30+31+30;
	cnt%=7;
	if(cnt == 0 ) cout << "Wednesday";
	else if(cnt == 1) cout << "Thursday";
	else if(cnt==2) cout << "Friday";
	else if(cnt==3) cout << "Saturday";
	else if(cnt==4) cout << "Sunday";
	else if(cnt==5) cout << "Monday";
	else if(cnt==6) cout << "Tuesday";
    return 0;
}
