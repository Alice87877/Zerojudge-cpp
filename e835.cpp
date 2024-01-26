//https://zerojudge.tw/ShowProblem?problemid=e835
#include <iostream>

using namespace std;

int main(){

    int n,a,b,c;
    cin>>n;

    if(n<=2500){
        a=1;
    }
    else if(n<=7500){
        a=2;
        n=n-2500;
    }
    else{
        a=3;
        n=n-7500;
    }

    if(a==2){
        b=n/50+1-(n%50==0);
        c=n%50+50*(n%50==0);
    }
    else{
        b=n/25+1-(n%25==0);
        c=n%25+25*(n%25==0);
    }
    cout<<a<<" "<<b<<" "<<c;

    return 0;
}
