//https://zerojudge.tw/ShowProblem?problemid=e511

#include <iostream>
using namespace std;

int main(){
    int n;cin>>n;
    for(int i=1;i<=n;i++){
        int m,max=0,min=100,a;cin>>m;
        for(int j=1;j<=m;j++){
            cin>>a;
            if(a>max) max=a;
            if(a<min) min=a;
        }
        cout<<2*(max-min)<<"\n";
    }

    return 0;
}
