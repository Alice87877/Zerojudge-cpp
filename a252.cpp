//https://zerojudge.tw/ShowProblem?problemid=a252
#include <bits/stdc++.h>
using namespace std;

int main(){
    string a,b,c;
    cin>>a>>b>>c;
    int lcs[100][100][100];
    for(int i=0;i<=a.size();i++){
        for(int j=0;j<=b.size();j++){
            for(int x=0;x<=c.size();x++){
                lcs[i][j][x]=0;
            }
        }
    }
    for(int i=1;i<=a.size();i++){
        for(int j=1;j<=b.size();j++){
            for(int x=1;x<=c.size();x++){
                if(a[i-1]==b[j-1] && a[i-1]==c[x-1]){
                    lcs[i][j][x]=lcs[i-1][j-1][x-1]+1;
                }else{
                    lcs[i][j][x]=max({lcs[i-1][j][x],lcs[i][j-1][x],lcs[i][j][x-1]});
                }
            }
        }
    }
    cout<<lcs[a.size()][b.size()][c.size()];
}