//https://zerojudge.tw/ShowProblem?problemid=e283
#include <bits/stdc++.h>
using namespace std;

map<string,char> m{
    {"0 1 0 1",'A'},
    {"0 1 1 1",'B'},
    {"0 0 1 0",'C'},
    {"1 1 0 1",'D'},
    {"1 0 0 0",'E'},
    {"1 1 0 0",'F'}
};

int main(){
    cin.tie(0);
    cout.tie(0);
    int n;
    while(cin>>n){
        cin.ignore();
        for(int i=0;i<n;i++){
            string sr;
            getline(cin,sr);
            cout<<m[sr];
        }
        cout<<'\n';
    }
}

