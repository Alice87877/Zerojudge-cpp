//https://zerojudge.tw/ShowProblem?problemid=a693
//這題將多組測資放在一起 使用迴圈會超時 所以使用前綴合
//a      1 2 3
//sum 0 1 3 6
#include <iostream>

using namespace std;

int main(){

    int n,m;
    while(cin>>n>>m){
    int a[n],sum[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum[i+1]=sum[i]+a[i];
    }
    for(int j=0;j<m;j++){
        int l,r;
        cin>>l>>r;
        cout<<sum[r]-sum[l-1]<<"\n";
    }
    }
    return 0;
}
