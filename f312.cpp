//https://zerojudge.tw/ShowProblem?problemid=f312
#include <iostream>

using namespace std;

int main(){
    int a1,a2,b1,b2,c1,c2,n;
    cin>>a1>>b1>>c1>>a2>>b2>>c2>>n;
    int ans=-1000;
    for(int i=0;i<=n;i++){
        if((a1*(n-i)*(n-i)+b1*(n-i)+c1)+(a2*i*i+b2*i+c2)>ans)
            ans=(a1*(n-i)*(n-i)+b1*(n-i)+c1)+(a2*i*i+b2*i+c2);
    }
    cout<<ans;

    return 0;
}
