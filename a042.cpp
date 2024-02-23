//https://zerojudge.tw/ShowProblem?problemid=a042

#include <iostream>
using namespace std;

int main(){
    int n;
    while(cin>>n){
        int sum=0;
        sum+=n*n-n+2;
        cout<<sum<<"\n";
    }
    return 0;
}
