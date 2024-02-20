//https://zerojudge.tw/ShowProblem?problemid=a148

#include <iostream>
using namespace std;

int main() {
    int n;
    while(cin>>n){
        float sum=0,a;
        for(int i=0;i<n;i++){
            cin>>a;
            sum+=a;
        }
        sum=sum/n;
        if(sum>59) cout<<"no\n";
        else cout<<"yes\n";
    }
    return 0;
}
