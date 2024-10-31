//https://zerojudge.tw/ShowProblem?problemid=c299
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> m(n);
    for(int i=0;i<n;i++){
        cin>>m[i];
    }
    sort(m.begin(),m.end());
    bool flag=1;
    for(int i=0;i<n-1;i++){
        if(m[i]+1!=m[i+1]){
            flag=0;
            break;
        }
    }
    cout<<m[0]<<' '<<m[n-1]<<' ';
    if(flag){
        cout<<"yes";
    }else{
        cout<<"no";
    }
}