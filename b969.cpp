//https://zerojudge.tw/ShowProblem?problemid=b969
#include<bits/stdc++.h>
using namespace std;

int main(){
    string name,word,a;
    getline(cin,name);
    getline(cin,word);
    stringstream ss(name);
    while(ss>>a){
        cout<<word<<", "<<a<<'\n';
    }
}