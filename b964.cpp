//https://zerojudge.tw/ShowProblem?problemid=b964
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,a[25];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<' ';
    }
    cout<<'\n';
    int badmax=-1,goodmin=150;
    for(int i=0;i<n;i++){
        if(a[i]<60 && a[i]>badmax){
            badmax=a[i];
        }
        if(a[i]>=60 && a[i]<goodmin){
            goodmin=a[i];
        }
    }
    if(badmax!=-1){
        cout<<badmax<<'\n';
    }else{
        cout<<"best case\n";
    }
    if(goodmin!=150){
        cout<<goodmin<<'\n';
    }else{
        cout<<"worst case\n";
    }
}