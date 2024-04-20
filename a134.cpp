//https://zerojudge.tw/ShowProblem?problemid=a134
#include<bits/stdc++.h>

using namespace std;

int main(){
    int fib[41]={0,1};
    for(int i=2;i<=40;i++){
        fib[i]=fib[i-1]+fib[i-2];
    }

    int n;
    cin>>n;
    while(n--){
        int m,f;
        cin>>m;
        for(int i=2;i<=40;i++){
            if(fib[i+1]>m && fib[i]<=m){
                f=i;
                break;
            }
        }
        cout<<m<<" = ";
        while(f>1){
            if(fib[f+1]>m && fib[f]<=m && m!=0){
                cout<<1;
                m-=fib[f];
            }else{
                cout<<0;
            }
            f--;
        }
        cout<<" (fib)\n";
    }
}
