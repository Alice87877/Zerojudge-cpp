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
    int n;
    cin>>n;
    cin.ignore(); 
    while(n--){
        string in,l[3];
        getline(cin,in);
        stringstream ss(in);
        ss>>l[0]; ss>>l[1]; ss>>l[2];
        sort(l,l+3,cmp);
        cout<<l[0]<<'\n';
    }
}