//https://zerojudge.tw/ShowProblem?problemid=c420
#include <iostream>

using namespace std;

int main(){

    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<"_";
        }
        for(int j=1;j<=i*2-1;j++){
            cout<<"*";
        }
        for(int j=1;j<=n-i;j++){
            cout<<"_";
        }
        cout<<"\n";
    }

    return 0;
}
