/*
    TASK: Grading
    AUTHOR: YooInw2
    LANG: CPP
    SCHOOL: Yoo Noober channel School at Home
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    cin >> a >> b >> c;
    int z= a+b+c;
    if(z>=80) cout << "A";
    else if(z >=75) cout << "B+";
    else if(z>=70) cout << "B";
    else if(z>=65) cout << "C+";
    else if(z>=60) cout << "C";
    else if (z>=55) cout <<"D+";
    else if(z>=50) cout << "D";
    else cout << "F";
    cout << endl;
    return 0;
}
/*
25 25 30
*/
