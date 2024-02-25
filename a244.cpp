//https://zerojudge.tw/ShowProblem?problemid=a244
#include <iostream>

using namespace std;

int main(){
    int n,a,b,c;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a>>b>>c;
        if(a==1) cout<<b+c<<"\n";
        if(a==2) cout<<b-c<<"\n";
        if(a==3) cout<<b*c<<"\n";
        if(a==4) cout<<b/c<<"\n";
    }
    return 0;
}
