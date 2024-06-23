//https://zerojudge.tw/ShowProblem?problemid=l960
#include<bits/stdc++.h>
using namespace std;

int main(){
    string s[7]={"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
    string a;
    bool flag=1;
    cin>>a;
    for(int i=0;i<7;i++){
        if(a==s[i]){
            cout<<i;
            flag=0;
            break;
        }
    }
    if(flag){
        cout<<"error";
    }
}
