//https://zerojudge.tw/ShowProblem?problemid=e924
#include <bits/stdc++.h>
using namespace std;

stack<char> st;

void find(char c,char d){
    if(!st.empty()){
        if(st.top()==d){
            st.pop();
            return;
        }
    }
    st.push(c);
}

int main(){
    int N;
    cin>>N;
    while(N--){
        while(!st.empty()) st.pop();
        string inpu;
        cin>>inpu;
        for(int i=0;i<inpu.size();i++){
            if(inpu[i]=='(' || inpu[i]=='[' || inpu[i]=='<' || inpu[i]=='{'){
                st.push(inpu[i]);
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

//e924-2是用stack寫的 可以明顯看到和vector寫法一樣 從e924命名可以看的出來我本來就想用stack但會意錯題目意思使用vector