//https://zerojudge.tw/ShowProblem?problemid=g275
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,a[7],b[7];
    while(cin>>n){
        while(n--){
            bool flag=1;
            for(int i=0;i<7;i++){
                cin>>a[i];
            }
            for(int i=0;i<7;i++){
                cin>>b[i];
            }
            if(a[1]==a[3] || a[1]!=a[5] || b[1]==b[3] || b[1]!=b[5]){
                cout<<'A';
                flag=0;
            }
            if(a[6]!=1 || b[6]!=0){
                cout<<'B';
                flag=0;
            }
            if(!(a[1]!=b[1] && a[3]!=b[3] && a[5]!=b[5])){
                cout<<'C';
                flag=0;
            }
            if(flag) cout<<"None";
            cout<<'\n';
        }
    }
}