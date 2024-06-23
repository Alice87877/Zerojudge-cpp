//https://zerojudge.tw/ShowProblem?problemid=d984
#include <bits/stdc++.h>
using namespace std;

int main(){
    long long a,b,c;
    while(cin>>a>>b>>c){
        if(a>b && a>c){
            if(a>b+c){
                cout<<"A\n";
            }else if(b>c){
                cout<<"B\n";
            }else{
                cout<<"C\n";
            }
        }else if(b>a && b>c){
            if(b>a+c){
                cout<<"B\n";
            }else if(a>c){
                cout<<"A\n";
            }else{
                cout<<"C\n";
            }
        }else{
            if(c>a+b){
                cout<<"C\n";
            }else if(a>b){
                cout<<"A\n";
            }else{
                cout<<"B\n";
            }
        }
    }
}

