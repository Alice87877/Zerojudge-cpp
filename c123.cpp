//https://zerojudge.tw/ShowProblem?problemid=c123
#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    while(cin>>N && N!=0){
        while(true){
            stack<int> st;
            while(!st.empty()) st.pop();
            int a[1010];
            cin>>a[0];
            if(a[0]==0){
                break;
            }
            for(int i=1;i<N;i++){
                cin>>a[i];
            }

            bool flag=1;
            int nownun=1;
            for(int i=0;i<N;i++){
                while(nownun<=N && (st.empty() || st.top()!=a[i])){
                    st.push(nownun);
                    nownun++;
                }
                if(!st.empty() && st.top()==a[i]){
                    st.pop();
                }else{
                    flag=0;
                    break;
                }
            }
            if(flag){
                cout<<"Yes\n";
            }else{
                cout<<"No\n";
            }
        }
    }
    
}
