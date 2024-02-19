//https://zerojudge.tw/ShowProblem?problemid=k181

#include <iostream>
using namespace std;

int main(){
    char s;
    int times=0;
    for(int i=0;i<10;i++){
        cin>>s;
        if(s=='8')
            times++;
        cout<<s;
    }
    cout<<" can get "<<times*10<<"% off.\n";

    return 0;
}
