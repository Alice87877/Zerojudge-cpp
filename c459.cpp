//https://zerojudge.tw/ShowProblem?problemid=c459
#include <bits/stdc++.h>
using namespace std;

int main(){
    int b,n;
    cin>>b>>n;
    int temp=n,tempb=b,n10=0,i=0,ans=0;
    while(temp>0){
        if(i==0){
            n10+=temp%10;
        }else{
            n10+=(temp%10)*tempb;
            tempb*=b;
        }
        temp/=10;
        i++;
    }
    temp=n;
    while(temp>0){
        int m=1;
        for(int j=0;j<i;j++){
            m*=temp%10;
        }
        ans+=m;
        temp/=10;
    }
    if(ans==n10){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
}