//https://zerojudge.tw/ShowProblem?problemid=d235
#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    while(cin>>s && s!="0"){
        int sum=0;
        for(int i=0;i<s.size();i++){
            if(i%2==0){
                sum+=s[i]-'0';
            }else{
                sum-=s[i]-'0';
            }
        }
        if(sum%11==0){
            cout<<s<<" is a multiple of 11.\n";
        }else{
            cout<<s<<" is not a multiple of 11.\n";
        }
    }
}