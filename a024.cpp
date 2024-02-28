//https://zerojudge.tw/ShowProblem?problemid=a024
#include <iostream>
using namespace std;

int main() {
    int a,b;
    cin>>a>>b;
    while(a!=0 && b!=0){
        if(a>b) a%=b;
        else b%=a;
    }
    if(a!=0) cout<<a;
    else cout<<b;

    return 0;
}
