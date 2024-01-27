//https://zerojudge.tw/ShowProblem?problemid=e968
#include <iostream>

using namespace std;

int main(){
    int n,a,b,c;
    cin>>n>>a>>b>>c;
    int ans[n];
    for(int i=0;i<n;i++){
        ans[i]=i+1;
    }
    for(int i=n-1;i>=0;i--){
        if(ans[i]!=a&&ans[i]!=b&&ans[i]!=c){
            cout<<"No. "<<i+1<<"\n";
        }
    }

    return 0;
}
