//https://zerojudge.tw/ShowProblem?problemid=f377
#include<bits/stdc++.h>
using namespace std;

int main(){
    stack<string> sta;
    vector<string> box;
    
    string inpu;
    while(getline(cin,inpu)){
        stringstream ss(inpu);
        box.clear();
        string ch;
        while(ss>>ch){
            if(ch=="("){
                sta.push(ch);
            }else if(ch=="*" || ch=="/"){
                while(!sta.empty() && (sta.top()=="*" || sta.top()=="/")){
                    box.push_back(sta.top());
                    sta.pop();
                }
                sta.push(ch);
            }else if(ch=="+" || ch=="-"){
                while(!sta.empty() && (sta.top()=="+" || sta.top()=="-" || sta.top()=="*" || sta.top()=="/")){
                    box.push_back(sta.top());
                    sta.pop();
                }
                sta.push(ch);
            }else if(ch==")"){
                while(!sta.empty() && sta.top()!="("){
                        box.push_back(sta.top());
                        sta.pop();
                    }
                    sta.pop();
            }else{
                box.push_back(ch);
            }
        }
        while(!sta.empty()){
            box.push_back(sta.top());
            sta.pop();
        }
        for(int i=0;i<box.size();i++){
            cout<<box[i]<<' ';
        }
        cout<<'\n';
    }
}