//https://zerojudge.tw/ShowProblem?problemid=a005
#include <iostream>

using namespace std;

int main(){

    int n,i,a,b,c,d;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a>>b>>c>>d;
        if((b-a)==(c-b)){
            cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<d+d-c<<"\n";
        }else{
            cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<d*(d/c)<<"\n";
        }
    }

    return 0;
}
