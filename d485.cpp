//https://zerojudge.tw/ShowProblem?problemid=d485
#include <iostream>

using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    cout<<(b-a)/2+(a%2==0)+(b%2==0 && a!=0 && a!=b && a%2!=0);
    return 0;
}
