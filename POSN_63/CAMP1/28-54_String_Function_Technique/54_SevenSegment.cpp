#include<bits/stdc++.h>
using namespace std;
long long get_sum(int n) {
	string a[5];
	long long sum=0;
	getline(cin, a[0]), getline(cin, a[1]), getline(cin, a[2]);
	for(int i=0; i<n*4; i+=4) {
		sum*=10;
		if(a[0][i]==' '&&a[0][i+1]==' '&& a[0][i+2]==' ' &&
		   a[1][i]==' '&& a[1][i+1]==' ' && a[1][i+2]=='|'&&
		   a[2][i]==' '&& a[2][i+1]==' ' && a[2][i+2]=='|') sum+=1;
		else if(a[0][i]==' '&&a[0][i+1]=='_'&& a[0][i+2]==' ' &&
		   		a[1][i]==' '&& a[1][i+1]=='_' && a[1][i+2]=='|'&&
		   		a[2][i]=='|'&& a[2][i+1]=='_' && a[2][i+2]==' ') sum+=2;
		else if(a[0][i]==' '&&a[0][i+1]=='_'&& a[0][i+2]==' ' &&
		   		a[1][i]==' '&& a[1][i+1]=='_' && a[1][i+2]=='|'&&
		   		a[2][i]==' '&& a[2][i+1]=='_' && a[2][i+2]=='|') sum+=3;
		else if(a[0][i]==' '&&a[0][i+1]==' '&& a[0][i+2]==' ' &&
		   		a[1][i]=='|'&& a[1][i+1]=='_' && a[1][i+2]=='|'&&
		   		a[2][i]==' '&& a[2][i+1]==' ' && a[2][i+2]=='|') sum+=4;
		else if(a[0][i]==' '&&a[0][i+1]=='_'&& a[0][i+2]==' ' &&
		   		a[1][i]=='|'&& a[1][i+1]=='_' && a[1][i+2]==' '&&
		   		a[2][i]==' '&& a[2][i+1]=='_' && a[2][i+2]=='|') sum+=5;
		else if(a[0][i]==' '&&a[0][i+1]=='_'&& a[0][i+2]==' ' &&
		   		a[1][i]=='|'&& a[1][i+1]=='_' && a[1][i+2]==' '&&
		   		a[2][i]=='|'&& a[2][i+1]=='_' && a[2][i+2]=='|') sum+=6;
		else if(a[0][i]==' '&&a[0][i+1]=='_'&& a[0][i+2]==' ' &&
		   		a[1][i]==' '&& a[1][i+1]==' ' && a[1][i+2]=='|'&&
		   		a[2][i]==' '&& a[2][i+1]==' ' && a[2][i+2]=='|') sum+=7;
		else if(a[0][i]==' '&&a[0][i+1]=='_'&& a[0][i+2]==' ' &&
		   		a[1][i]=='|'&& a[1][i+1]=='_' && a[1][i+2]=='|'&&
		   		a[2][i]=='|'&& a[2][i+1]=='_' && a[2][i+2]=='|') sum+=8;
		else if(a[0][i]==' '&&a[0][i+1]=='_'&& a[0][i+2]==' ' &&
		   		a[1][i]=='|'&& a[1][i+1]=='_' && a[1][i+2]=='|'&&
		   		a[2][i]==' '&& a[2][i+1]=='_' && a[2][i+2]=='|') sum+=9;
	}
	return sum;
}
int main() {
	int n,m;
	string a;
	getline(cin, a);
	stringstream ss(a);
	ss >> n >> m;
	long long sum=get_sum(n) + get_sum(m);
	printf("%lld\n", sum);
	return 0;
}
