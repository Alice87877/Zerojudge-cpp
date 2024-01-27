//https://zerojudge.tw/ShowProblem?problemid=a038
#include <iostream>
#include <math.h>

using namespace std;

int main(){

    int n,s;
    cin>>n;
    while(n>0.1){
        s=s*10;
        s+=n%10;
        n=n/10;
    }
    cout<<s;
    return 0;
}
