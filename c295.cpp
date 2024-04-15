//https://zerojudge.tw/ShowProblem?problemid=c295
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m,a[21],in;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        int top=0;
        for(int j=0;j<m;j++){
            cin>>in;
            if(in>top){
                top=in;
            }
        }
        a[i]=top;
    }

    int s=0;
    for(int i=0;i<n;i++){
        s+=a[i];
    }
    cout<<s<<"\n";

    bool flag=1;
    for(int i=0;i<n;i++){
        if(s%a[i]==0 && flag){
            cout<<a[i];
            flag=0;
        }else if(s%a[i]==0){
            cout<<" "<<a[i];
            flag=0;
        }
    }

    if(flag){
        cout<<-1;
    }

}
