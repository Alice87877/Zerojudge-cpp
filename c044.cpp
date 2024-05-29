//https://zerojudge.tw/ShowProblem?problemid=c044
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    string s;
    int a[26],A[26];
    for(int i=0;i<26;i++){
        a[i]=0;
        A[i]=0;
    }
    for(int j=0;j<=n;j++){
        getline(cin,s);
        for(int i=0;i<s.size();i++){
            if(s[i]>='a' && s[i]<='z'){
                a[s[i]-'a']++;
            }else if(s[i]>='A' && s[i]<='Z'){
                A[s[i]-'A']++;
            }
        }
    }
    int imax=-1;
    for(int i=0;i<26;i++){
        a[i]+=A[i];
        if(a[i]>imax){
            imax=a[i];
        }
    }
    for(int i=imax;i>=1;i--){
        for(int j=0;j<26;j++){
            if(a[j]==i){
                char ans='A';
                ans+=j;
                cout<<ans<<' '<<a[j]<<'\n';
            }
        }
    }
    
}
