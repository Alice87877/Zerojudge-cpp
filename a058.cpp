//https://zerojudge.tw/ShowProblem?problemid=a058

#include <iostream>
using namespace std;

int main() {
    int n,m,a=0,b=0,c=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>m;
        if(m%3==0) a++;
        else if(m%3==1) b++;
        else c++;
    }
    cout<<a<<" "<<b<<" "<<c;
    return 0;
}
