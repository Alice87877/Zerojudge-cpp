//https://zerojudge.tw/ShowProblem?problemid=e623
#include <iostream>

using namespace std;

int main(){

    int n,i,j,ans;
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){ans+=1; if(ans==n) cout<<"Pen";}
        for(j=1;j<=i;j++){ans+=1; if(ans==n) cout<<"Pineapple";}
        for(j=1;j<=i;j++){ans+=1; if(ans==n) cout<<"Apple";}
        for(j=1;j<=i;j++){ans+=1; if(ans==n) cout<<"Pineapple pen";}
    }

    return 0;
}
