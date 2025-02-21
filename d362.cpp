//https://zerojudge.tw/ShowProblem?problemid=d362
#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<bool> prime(20000001,true);
    prime[0]=false;
    prime[1]=false;
    for(int i=2;i*i<=20000000;i++){
        if(prime[i]){
            for(int j=i+i;j<20000000;j+=i){
                prime[j]=false;
            }
        }
    }
    vector<int> ans;
    for(int i=3;i<=19999998;i++){
        if(prime[i]&&prime[i+2]){
            ans.push_back(i);
        }
    }
    int n;
    while(cin>>n){
        cout<<"("<<ans[n-1]<<", "<<ans[n-1]+2<<")\n";
    }
}
