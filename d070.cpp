//https://zerojudge.tw/ShowProblem?problemid=d070

#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    while(n!=0){
    if(((n%400!=0)&&n%100==0)||(n%4!=0))cout<<"a normal year\n";
    else cout<<"a leap year\n";
    cin>>n;
    }
    return 0;
}
