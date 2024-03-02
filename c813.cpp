//https://zerojudge.tw/ShowProblem?problemid=c813
#include <iostream>

using namespace std;

int main(){
    int n;
    while(cin>>n && n!=0){
        while(n>=10){
            int ans=0;
            while(n!=0){
                ans+=n%10;
                n/=10;
            }
            n=ans;
        }
        cout<<n<<'\n';
    }
    return 0;
}

