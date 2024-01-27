//https://zerojudge.tw/ShowProblem?problemid=d066
#include <iostream>
#include <math.h>

using namespace std;

int main(){

    int h,m;
    cin>>h>>m;
    if(h>7&&h<17)
        cout<<"At School";
    else if(h==7&&m>=30)
        cout<<"At School";
    else
        cout<<"Off School";
    return 0;
}
