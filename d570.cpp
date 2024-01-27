//https://zerojudge.tw/ShowProblem?problemid=d570
#include <iostream>
#include <math.h>

using namespace std;

int main(){

    int n;
    cin>>n;
    while(n>0.1){
        cout<<n<<"\n";
        n=n/10;
    }
    return 0;
}
