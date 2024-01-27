//https://zerojudge.tw/ShowProblem?problemid=a006
#include <iostream>
#include <math.h>

using namespace std;

int main(){

    int a,b,c,d,ans;
    cin>>a>>b>>c;
    d=b*b-4*a*c;
    if(d==0){
        ans=(-1*b)/(2*a);
        cout<<"Two same roots x="<<ans;
    }
    if(d<0){
        cout<<"No real root";
    }
    if(d>0){
        d=sqrt(d);
        ans=(-1*b+d)/2*a;
        cout<<"Two different roots x1="<<ans;
        ans=(-1*b-d)/2*a;
        cout<<" , x2="<<ans;
    }

    return 0;
}
