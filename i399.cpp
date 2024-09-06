//https://zerojudge.tw/ShowProblem?problemid=i399
#include <bits/stdc++.h>
using namespace std;

int main(){
    int a[3];
    cin>>a[0]>>a[1]>>a[2];
    int b[10];
    for(int i=0;i<10;i++) b[i]=0;
    for(int i=0;i<3;i++){
        b[a[i]]++;
    }
    int ma=-1;
    for(int i=0;i<10;i++){
        if(b[i]>ma) ma=b[i];
    }
    cout<<ma<<' ';
    for(int i=9;i>0;i--){
        if(b[i]!=0){
            cout<<i<<' ';
        }
    }
}
