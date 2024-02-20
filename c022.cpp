//https://zerojudge.tw/ShowProblem?problemid=c022

#include <iostream>
using namespace std;

int main(){
    int n;cin>>n;
    for(int i=1;i<=n;i++){
        int sum=0,a,b;
        cin>>a>>b;
        for(a;a<=b;a++){
            if(a%2==1){
                sum+=a;
            }
        }
        cout<<"Case "<<i<<": "<<sum<<"\n";
    }

    return 0;
}
