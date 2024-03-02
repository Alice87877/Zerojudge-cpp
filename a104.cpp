//https://zerojudge.tw/ShowProblem?problemid=a104
#include <iostream>
using namespace std;

int main(){
    int n;
    while(cin>>n){
        int a[1001],i=0,j=n;
        while(j--){
            cin>>a[i];
            i++;
        }
        int ans=0;
        while(i--){
            for(int j=0;j<n;j++){
                if(a[j]<a[ans])
                    ans=j;
            }
            cout<<a[ans]<<" ";
            a[ans]=2147483647;
        }
        cout<<'\n';
    }
    return 0;
}

