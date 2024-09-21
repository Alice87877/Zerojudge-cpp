//https://zerojudge.tw/ShowProblem?problemid=i213
#include<bits/stdc++.h>
using namespace std;

int main(){
    stack<int> st;
    int N,k,a;
    cin>>N;
    while(N--){
        cin>>k;
        if(k==1){
            cin>>a;
            st.push(a);
        }
        if(k==2){
            if(!st.empty()){
                cout<<st.top()<<'\n';
            }else{
                cout<<-1<<'\n';
            }
        }
        if(k==3){
            if(!st.empty()){
                st.pop();
            }
        }
    }
}
