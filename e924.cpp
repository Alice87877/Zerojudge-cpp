//https://zerojudge.tw/ShowProblem?problemid=e924
#include <bits/stdc++.h>
using namespace std;

vector<char> st;

void find(char c,char d){
    if(!st.empty()){
        if(st.back()==d){
            st.pop_back();
            return;
        }
    }
    st.push_back(c);
}

int main(){
    int N;
    cin>>N;
    while(N--){
        st.clear();
        string inpu;
        cin>>inpu;
        for(int i=0;i<inpu.size();i++){
            if(inpu[i]=='(' || inpu[i]=='[' || inpu[i]=='<' || inpu[i]=='{'){
                st.push_back(inpu[i]);
            }else{
                if(inpu[i]==')'){
                    find(')','(');
                }else if(inpu[i]==']'){
                    find(']','[');
                }else if(inpu[i]=='>'){
                    find('>','<');
                }else{
                    find('}','{');
                }
            }
        }
        if(st.empty()){
            cout<<"Y\n";
        }else{
            cout<<"N\n";
        }
    }
}