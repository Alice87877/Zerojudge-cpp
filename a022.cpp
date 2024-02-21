//https://zerojudge.tw/ShowProblem?problemid=a022

#include <iostream>
using namespace std;

int main(){
    string n;
    char a,b;
    cin>>n;
    a=n[0];
    for(int i=0;i<1000;i++){
        b=n[i];
        if(b==0){
            b=n[i-1];
            break;
        }
    }
    if(a==b) cout<<"yes";
    else cout<<"no";
    return 0;
}
