//https://zerojudge.tw/ShowProblem?problemid=d053

#include <iostream>
using namespace std;

int main(){
    int m,n;
    while(cin>>m>>n){
        int sum=0;
        sum+=m-1;
        sum+=m*(n-1);
        cout<<sum<<"\n";
    }
    return 0;
}
