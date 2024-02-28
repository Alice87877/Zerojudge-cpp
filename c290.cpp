//https://zerojudge.tw/ShowProblem?problemid=c290
#include <iostream>
using namespace std;

int main() {
    int ans=0;
    string s;
    cin>>s;
    for(int i=0;s[i];i++){
        if(i%2==0) ans+=s[i]-'0';
        else ans-=s[i]-'0';
    }
    cout<<abs(ans);
}
