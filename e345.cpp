//https://zerojudge.tw/ShowProblem?problemid=e345
#include <iostream>

using namespace std;

int main(){
    int n;
    while(cin>>n){
        int sum=10;
        while(sum>=10){
            sum=0;
            while(n>0){
                sum+=n%10;
                n/=10;
            }
            n=sum;
        }
        cout<<sum<<"\n";
    }
    return 0;
}
