//https://zerojudge.tw/ShowProblem?problemid=c005

#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        long long m,sum=0,a,b,c;
        cin>>m;
        for(int j=0;j<m;j++){
            cin>>a>>b>>c;
            sum+=a*c;
        }
        cout<<sum<<"\n";
    }

    return 0;
}
