//https://zerojudge.tw/ShowProblem?problemid=a845

#include <iostream>
using namespace std;

int main(){
    int n; cin>>n;
    int h[n],i=0;
    while(n--){
        cin>>h[i];
        i++;
    }
    cin>>n;
    while(n--){
        int a,b;
        cin>>a>>b;
        cout<<h[a]+h[b]<<"\n";
    }
}
