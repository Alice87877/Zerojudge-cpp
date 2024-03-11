//https://zerojudge.tw/ShowProblem?problemid=c382
#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    char l;
    cin>>a>>l>>b;
    if(l=='+'){
        cout<<a+b;
    }else if(l=='-'){
        cout<<a-b;
    }else if(l=='*'){
        cout<<a*b;
    }else{
        cout<<a/b;
    }
}
