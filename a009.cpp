//https://zerojudge.tw/ShowProblem?problemid=a009

#include <iostream>
using namespace std;

int main() {

    string a;
    cin>>a;
    char s;
    for(int i=0;i<1000;i++){
        s=a[i];
        if(s==0) break;
        s=a[i]-7;
        cout<<s;
    }

    return 0;
}
