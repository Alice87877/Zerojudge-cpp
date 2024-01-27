//https://zerojudge.tw/ShowProblem?problemid=b294
#include <iostream>

using namespace std;

int main(){

    int n,m,i,s=0;
    cin>>n;
    for(i=1;i<=n;i++){
        cin>>m;
        s+=m*i;
    }
    cout<<s;

    return 0;
}
