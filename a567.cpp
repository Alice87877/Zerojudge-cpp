//https://zerojudge.tw/ShowProblem?problemid=g597
#include<bits/stdc++.h>
using namespace std;

struct dl{
    int d,p;
};

bool cmp(dl a,dl b){
    return a.p>b.p;
}


int main(){
    vector<dl> vec;
    int yes[10100];
    int n;
    while(cin>>n){
        int dmax=0;
        vec.clear();
        for(int i=0;i<n;i++){
            dl inpu;
            cin>>inpu.d>>inpu.p;
            vec.push_back(inpu);
            if(inpu.d>dmax) dmax=inpu.d;
        }
        for(int i=0;i<dmax;i++) yes[i]=0;
        sort(vec.begin(),vec.begin()+n,cmp);
        int ans=0;
        for(int i=0;i<n;i++){
            int j=vec[i].d-1;
            while(yes[j]!=0 && j>=0){
                j--;
            }
            if(j!=-1){
                yes[j]=vec[i].p;
                ans+=vec[i].p;
            }
        }
        cout<<ans<<'\n';
    }
}