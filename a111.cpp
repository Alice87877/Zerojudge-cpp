//https://zerojudge.tw/ShowProblem?problemid=a111
#include <iostream>

using namespace std;

int main(){
    int n;
    while(cin>>n && n!=0){
        cout<<(n*(n+1)*(2*n+1))/6<<'\n';
    }

    return 0;
}
