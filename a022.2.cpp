//https://zerojudge.tw/ShowProblem?problemid=a022
#include <iostream>
using namespace std;

int main() {
    int n=0;
    string s;
    bool flag=1;
    cin>>s;
    for(int i=0;s[i];i++){
        n++;
    }
    for(int i=0,j=n-1;i<j;i++,j--){
        if(s[i]!=s[j]) flag=0;
    }
    if(flag) cout<<"yes";
    else cout<<"no";
}
