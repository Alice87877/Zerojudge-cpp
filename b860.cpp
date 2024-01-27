//https://zerojudge.tw/ShowProblem?problemid=b860
#include <iostream>

using namespace std;

int main(){

    int c,w,ans;
    cin>>c>>w;
    while(w>0){
        while(c>=12&&w>0){
            w=w-1;
            c=c-10;
            ans+=1;
        }
        c=c+1;
        w=w-1;
    }
    cout<<ans;

    return 0;
}
