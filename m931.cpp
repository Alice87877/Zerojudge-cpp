//https://zerojudge.tw/ShowProblem?problemid=m931
//APCS2024年一月第一題
#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n,a[21][2];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i][0]>>a[i][1];
    }git pull --rebase
    long long m=-1,I;
    for(int i=0;i<=n;i++){
        if(a[i][0]*a[i][0]+a[i][1]*a[i][1]>m){
            m=a[i][0]*a[i][0]+a[i][1]*a[i][1];
            I=i;
        }
    }
    a[I][0]=0;
    a[I][1]=0;
    m=-1;
    for(int i=0;i<=n;i++){
        if(a[i][0]*a[i][0]+a[i][1]*a[i][1]>m){
            m=a[i][0]*a[i][0]+a[i][1]*a[i][1];
            I=i;
        }
    }
    cout<<a[I][0]<<' '<<a[I][1];
}