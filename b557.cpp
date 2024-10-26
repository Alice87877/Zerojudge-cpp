//https://zerojudge.tw/ShowProblem?problemid=b557
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> vec(n);
        for(int i=0;i<n;i++){
            cin>>vec[i];
            vec[i]=vec[i]*vec[i];
        }
        sort(vec.begin(),vec.end());
        int time=0;
        if(n<3){
            time=0;
        }else{
            for(int i=0;i<n-2;i++){
                for(int j=i+1;j<n-1;j++){
                    for(int x=j+1;x<n;x++){
                        if(vec[i]+vec[j]==vec[x]){
                            time++;
                        }
                    }
                }
            }
        }
        cout<<time<<'\n';
    }
}