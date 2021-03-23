/*
    TASK: Ptice
    AUTHOR: Pna_Wan
    LANG: C++
    SCHOOL: Gaiyang
*/
#include<bits/stdc++.h>
#define ll long long
using namespace std;
char a[105];
char an[]="ABC",br[]="BABC",gr[]="CCAABB";
int main(){

	int n,i;
	cin >> n;
    int ann=0,brr=0,grr=0;
	scanf(" %s",a);
	for(i=0;i<n;i++){
        if(a[i] == an[i%3]) ann++;
        if(a[i] == br[i%4]) brr++;
        if(a[i] == gr[i%6]) grr++;
	}
    if(ann == grr && ann == brr){
        cout << ann << "\n" << "Adrian\n" << "Bruno\n" << "Goran\n";
    }
    else if(ann > grr && ann > brr){
        cout << ann << "\nAdrian";
    }
    else if(ann == grr && ann > brr){
        cout << ann << "\nAdrian\nGoran";
    }
    else if(ann == brr && ann > grr){
        cout << ann <<"\nAdrian\nBruno";
    }
    else if(brr > grr && brr > ann ){
        cout << brr << "\nBruno";
    }
    else if(brr == grr && brr > ann){
        cout << brr << "\nBruno\nGoran";
    }
    else if(grr > brr && grr > ann){
        cout << grr << "\nGoran";
    }
    return 0;
}
