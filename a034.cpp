//https://zerojudge.tw/ShowProblem?problemid=a034

#include <iostream>
using namespace std;

int main(){
    int n;
    while(cin>>n){
        int ans=0,i=0,a;
        while(n!=0){
            a=n%2;
            for(int j=1;j<=i;j++) a*=10;
            n/=2;
            ans+=a;
            i++;
        }
        cout<<ans<<"\n";
    }
    return 0;
}
