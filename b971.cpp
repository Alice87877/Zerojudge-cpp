//https://zerojudge.tw/ShowProblem?problemid=b971
#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,n,d;
    cin>>a>>n>>d;
    for(int i=a;i!=n;i+=d){
        cout<<i<<" ";
    }
    cout<<n;
}
