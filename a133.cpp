//https://zerojudge.tw/ShowProblem?problemid=a133
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n1,n2,T=1;
    int b1[100],b2[100],lcs[110][110];
    while(cin>>n1>>n2 && n1+n2!=0){
        for(int i=0;i<=n1;i++){
            for(int j=0;j<=n2;j++){
                lcs[i][j]=0;
            }
        }
        for(int i=0;i<n1;i++){
            cin>>b1[i];
        }
        for(int i=0;i<n2;i++){
            cin>>b2[i];
        }
        for(int i=1;i<=n1;i++){
            for(int j=1;j<=n2;j++){
                if(b1[i-1]==b2[j-1]){
                    lcs[i][j]=lcs[i-1][j-1]+1;
                }else{
                    lcs[i][j]=max(lcs[i-1][j],lcs[i][j-1]);
                }
            }
        }
        cout<<"Twin Towers #"<<T<<"\nNumber of Tiles : "<<lcs[n1][n2]<<"\n\n";
        T++;
    }
}