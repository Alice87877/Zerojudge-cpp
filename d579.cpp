//https://zerojudge.tw/ShowProblem?problemid=d579
#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    double a;
    while(cin>>a){
        cout <<fixed<<setprecision(4)<<"|"<<a<<"|=";
        if(a>0) cout<<a;
        else cout<<-1*a;
        cout<<"\n";
    }

    return 0;
}
