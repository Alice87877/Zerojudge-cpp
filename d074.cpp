//https://zerojudge.tw/ShowProblem?problemid=d074
#include <iostream>

using namespace std;

int main(){

    int n,m,i,ans;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>m;
        if(m>ans)
            ans=m;
    }
    cout<<ans;

    return 0;
}
