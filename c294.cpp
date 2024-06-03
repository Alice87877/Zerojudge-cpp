//https://zerojudge.tw/ShowProblem?problemid=c294
#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if(b>c && b>a){
        swap(b,c);
    }else if(a>c && a>b){
        swap(a,c);
    }
    if(a>b){
            swap(a,b);
    }
    cout<<a<<' '<<b<<' '<<c<<'\n';
    if(a+b<=c){
        cout<<"No";
    }else if (a*a+b*b<c*c){
        cout<<"Obtuse";
    }else if (a*a+b*b==c*c){
        cout<<"Right";
    }else{
        cout<<"Acute";
    }
}
