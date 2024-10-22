//APCS24102
//https://zerojudge.tw/ShowProblem?problemid=o712
#include<bits/stdc++.h>
using namespace std;

int main(){
    int m,n,k,r,c,s[110][110],p=0,jw=0,face=0;
    cin>>m>>n>>k>>r>>c;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>s[i][j];
        }
    }
    while(s[r][c]!=0){
        p+=s[r][c];
        s[r][c]--;
        jw++;
        if(p%k==0){
            face=(face+1)%4;
        }
        bool cango=1;
        while(cango){
            if(face==0){
                if(c+1<n && s[r][c+1]!=-1){
                    c++;
                    cango=0;
                }else{
                    face=1;
                }
            }else if(face==1){
                if(r+1<m && s[r+1][c]!=-1){
                    r++;
                    cango=0;
                }else{
                    face=2;
                }
            }else if(face==2){
                if(c-1>=0 && s[r][c-1]!=-1){
                    c--;
                    cango=0;
                }else{
                    face=3;
                }
            }else if(face==3){
                if(r-1>=0 && s[r-1][c]!=-1){
                    r--;
                    cango=0;
                }else{
                    face=0;
                }
            }
        }
    }
    cout<<jw;
}