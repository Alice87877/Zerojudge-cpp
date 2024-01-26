//https://zerojudge.tw/ShowProblem?problemid=a003
#include <iostream>

using namespace std;

int main(){

    int m,d,s;
    cin>>m>>d;
    s=(2*m+d)%3;
    if(s==0)
            cout<<"´¶³q";
    if(s==1)
            cout<<"¦N";
    if(s==2)
            cout<<"¤j¦N";

    return 0;
}
