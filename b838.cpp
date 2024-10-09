//https://zerojudge.tw/ShowProblem?problemid=b838
#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin>>N;
    cin.ignore();
    while(N--){
        int time=0;
        string inpu;
        getline(cin,inpu);
        stack<char> st;
        while(!st.empty()) st.pop();
        for(int i=0;i<inpu.size();i++){
            if(inpu[i]=='('){
                st.push('(');
            }
            if(inpu[i]==')'){
                if(!st.empty() && st.top()=='('){
                    st.pop();
                    time++;
                }else{
                    st.push(')');
                }
            }
        }
        if(!st.empty()){
            cout<<0<<'\n';
        }else{
            cout<<time<<'\n';
        }
    }
}