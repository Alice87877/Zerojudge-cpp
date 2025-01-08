//APCS202512
//https://zerojudge.tw/ShowProblem?problemid=q182
#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    int n;
    cin>>s>>n;
    while(n--){
        int in;
        cin>>in;
        if(in==0){
            for(int i=0;i<s.size();i+=2){
                swap(s[i],s[i+1]);
            }
        }else if(in==1){
            for(int i=0;i<s.size();i+=2){
                if(s[i+1]<s[i]){
                    swap(s[i],s[i+1]);
                }
            }
        }else{
            string a="",b="";
            for(int i=0;i<s.size()/2;i++){
                a+=s[i];
                b+=s[i+s.size()/2];
            }
            for(int i=0,j=0;i<s.size();i+=2,j++){
                s[i]=a[j];
                s[i+1]=b[j];
            }
        }
    }
    cout<<s;
}
