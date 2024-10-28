//https://zerojudge.tw/ShowProblem?problemid=b898
#include <bits/stdc++.h>
using namespace std;

bool cmp(string a,string b){
    if(a.size()!=b.size()){
        return a.size()>b.size();
    }
    return a>b;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    while(n--){
        string l[3];
        cin>>l[0]>>l[1]>>l[2];
        sort(l,l+3,cmp);
        cout<<l[0]<<endl;
    }
}