//https://zerojudge.tw/ShowProblem?problemid=e834
#include <iostream>

using namespace std;

int main(){

    int m,t;
    cin>>m;
    while(cin>>t&&t!=0){
        if(t%m==0){
            cout<<t/m<<"\n";
        }else{
            cout<<m-(t%m)<<"\n";
        }
    }

    return 0;
}
