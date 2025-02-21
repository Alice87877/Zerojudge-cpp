//https://zerojudge.tw/ShowProblem?problemid=d267
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    cin.ignore();
    string s;
    while(n--){
        getline(cin,s);
        int m[26];
        for(int i=0;i<26;i++){
            m[i]=0;
        }
        for(int i=0;i<s.size();i++){
            if(s[i]>='a'&&s[i]<='z'){
                m[s[i]-'a']++;
            }else if(s[i]>='A'&&s[i]<='Z'){
                m[s[i]-'A']++;
            }
        }
        int ma=0,ans;
        for(int i=25;i>=0;i--){
            if(m[i]>ma){
                ma=m[i];
            }
        }
        for(int i=0;i<26;i++){
            if(m[i]==ma){
                char c='a'+i;
                cout<<c;
            }
        }
        cout<<'\n';
    }
}
