//https://zerojudge.tw/ShowProblem?problemid=d072

#include <iostream>
using namespace std;

int main(){
    int n,a;
    cin>>a;
    for(int i=1;i<=a;i++){
    cin>>n;
    cout<<"Case "<<i<<": ";
    if(((n%400!=0)&&n%100==0)||(n%4!=0))cout<<"a normal year\n";
    else cout<<"a leap year\n";
    }
    return 0;
}
