//https://zerojudge.tw/ShowProblem?problemid=d096
#include <iostream>
#define ll long long

using namespace std;

int main(){
    ll n;
    while(cin>>n){
        ll a=0;
        a=((1+n)*(n+1)/2)/2;
        ll sum=0;
        sum=6*a-9;
        cout<<sum<<'\n';
    }
}

