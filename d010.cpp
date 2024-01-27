//https://zerojudge.tw/ShowProblem?problemid=d010
#include <iostream>

using namespace std;

int main(){

    int n,i,s;
    while(cin>>n){
    s=0;
    for(i=1;i<n;i++){
        if(n%i==0)
            s=s+i;
    }
    if(s>n){
        cout<<"盈數\n";
    }else if(s<n){
        cout<<"虧數\n";
    }else
        cout<<"完全數\n";
    }
    return 0;
}
