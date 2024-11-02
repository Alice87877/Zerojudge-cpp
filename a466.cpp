//https://zerojudge.tw/ShowProblem?problemid=a466
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    string s;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>s;
        if(s.size()>3){
            cout<<'3';
        }else if((s[0]=='o' && s[1]=='n') || (s[0]=='o' && s[2]=='e') || (s[1]=='n' && s[2]=='e')){
            cout<<'1';
        }else{
            cout<<'2';
        }
        cout<<'\n';
    }
}