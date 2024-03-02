//https://zerojudge.tw/ShowProblem?problemid=a059
#include <iostream>
using namespace std;

int main(){
    int n,d[1000];
    for(int i=1;i*i<=1000;i++){
        d[i]=i*i;
    }
    cin>>n;
    for(int i=1;i<=n;i++){
        int a,b,sum=0;
        cin>>a>>b;
        for(int j=1;d[j]<=b;j++)
            sum+=d[j];
        for(int j=1;d[j]<a;j++)
            sum-=d[j];
        cout<<"Case "<<i<<": "<<sum<<'\n';
    }

    return 0;
}

