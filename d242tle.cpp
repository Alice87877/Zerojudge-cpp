//https://zerojudge.tw/ShowProblem?problemid=d242
#include <bits/stdc++.h>
using namespace std;
//TLEEEEEEEEEEEEEEEEEEEE啦

struct putlist{
    int num;
    vector<int> l;
};

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    vector<int> num;
    while(cin>>n){
        num.push_back(n);
    }
    int ans=0,ansi;
    putlist lis[num.size()];
    for(int i=0;i<num.size();i++){
        lis[i].num=1;
        lis[i].l.push_back(num[i]);
    }
    for(int i=0;i<num.size();i++){
        for(int j=0;j<i;j++){
            if(num[i]>num[j]){
                if(lis[i].num<=lis[j].num+1){
                    lis[i].num=lis[j].num+1;
                    lis[i].l=lis[j].l;
                    lis[i].l.push_back(num[i]);
                }
            }
        }
        if(ans<=lis[i].num){
            ansi=i;
            ans=lis[i].num;
        }
    }
    cout<<ans<<"\n-\n";
    for(auto t : lis[ansi].l){
        cout<<t<<'\n';
    }
}