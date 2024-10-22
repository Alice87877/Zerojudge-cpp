//TOI練習賽202409新手組第1題
//https://zerojudge.tw/ShowProblem?problemid=o578
#include<bits/stdc++.h>
using namespace std;

int main(){
    int l,w,h,k;
    cin>>l>>w>>h>>k;
    if(l%k==0 && w%k==0 && h%k==0){
        cout<<(l/k)*(w/k)*(h/k);
    }else{
        cout<<0;
    }
}