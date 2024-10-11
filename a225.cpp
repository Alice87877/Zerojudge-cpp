//https://zerojudge.tw/ShowProblem?problemid=a225
#include<bits/stdc++.h>
using namespace std;

bool cmp(int a,int b){
    if(a%10!=b%10){
        return a%10<b%10;
    }
    return a>b;
}

int main(){
    int n,a[100000];
    while(cin>>n){
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n,cmp);
        for(int i=0;i<n;i++){
            cout<<a[i]<<' ';
        }
        cout<<'\n';
    }
}