//https://zerojudge.tw/ShowProblem?problemid=c134
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,a[100];
        cin>>n;
        int end;
        for(int i=0,j=2;j<=n;j++,i++){
            a[i]=j;
            n-=j;
            end=i;
        }
        for(int i=end;n>0&&i>=0;i--){
            a[i]++;
            n--;
        }
        if(n==1){
            a[end]++;
        }

        for(int i=0;i<=end;i++){
            cout<<a[i]<<" ";
        }
        cout<<'\n';
    }
}

// 3=1+2 4=1+3 5=2+3 6=2+4 7=3+4 8=3+5 9=2+3+4 10=2+3+5 11=2+4+5 12=3+4+5 13=3+4+6 14=2+3+4+5