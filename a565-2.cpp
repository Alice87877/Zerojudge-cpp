//https://zerojudge.tw/ShowProblem?problemid=a565
//http://203.68.236.9/problem/b0001
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    while(n--){
        int time=0;
        stack<char> st;
        string inpu;
        cin>>inpu;
        while(!st.empty()){
            st.pop();
        }
        for(int i=0;i<inpu.size();i++){
            if(inpu[i]=='p'){
                st.push('p');
            }
            if(inpu[i]=='q'){
                if(!st.empty()){
                    time++;
                    st.pop();
                }
            }
        }
        cout<<time<<'\n';
    }
}
