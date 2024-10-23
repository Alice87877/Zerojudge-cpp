//https://zerojudge.tw/ShowProblem?problemid=d038
#include <bits/stdc++.h>
using namespace std;

int main(){
    long long w[50];
    w[0]=1;
    w[1]=2;
    for(int i=2;i<50;i++){
        w[i]=w[i-1]+w[i-2];
    }
    int n;
    while(cin>>n && n!=0){
        cout<<w[n-1]<<'\n';
    }
}
