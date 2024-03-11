//https://zerojudge.tw/ShowProblem?problemid=b682
#include <bits/stdc++.h>
using namespace std;

int main(){
    int h1,m1,h2,m2,t,t1,t2;
    cin>>h1>>m1>>h2>>m2;
    t1=h1*60+m1;
    t2=h2*60+m2;
    if(t2>=t1){
        t=t2-t1;
    }else{
        t=60*24-t1+t2;
    }
    cout<<t/60<<" "<<t%60;
}
