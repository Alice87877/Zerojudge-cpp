//https://zerojudge.tw/ShowProblem?problemid=c508
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n,a[100002];
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    
    sort(a,a+n+1);

    for(int i=1;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<a[n]<<'\n';

    for(int i=n;i>1;i--){
        if(a[i]!=a[i-1]){
            cout<<a[i]<<" ";
        }
    }
    cout<<a[1];

}
