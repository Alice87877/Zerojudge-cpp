//https://zerojudge.tw/ShowProblem?problemid=b898
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    while(n--){
        int m;
        string l[3];
        cin>>l[0]>>l[1]>>l[2];
        if(l[0].size()!=l[1].size()){
            if(l[0].size()>l[1].size()){
                m=0;
            }else{
                m=1;
            }
        }else{
            if(l[0]>l[1]){
                m=0;
            }else{
                m=1;
            }
        }
        if(l[m].size()!=l[2].size()){
            if(l[2].size()>l[m].size()){
                m=2;
            }
        }else{
            if(l[2]>l[m]){
                m=2;
            }
        }
        cout<<l[m]<<'\n';
    }
}