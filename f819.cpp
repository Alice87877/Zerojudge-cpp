//https://zerojudge.tw/ShowProblem?problemid=f819
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,sum=0,a[2001];
    for(int i=0;i<=2000;i++){
        a[i]=0;
    }
    cin>>n;
    while(n--){
        int s,b;
        cin>>s>>b;
        if(b>100){
            sum+=5*(b-100);
            a[s]=1;
        }
    }
    if(sum!=0){
        for(int i=1;i<=2000;i++){
            if(a[i]==1){
                cout<<i<<" ";
            }
        }
        cout<<'\n'<<sum;
    }else{
        cout<<0;
    }
}
