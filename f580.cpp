//https://zerojudge.tw/ShowProblem?problemid=f580
#include<bits/stdc++.h>
using namespace std;

int main(){
        int n,m;
        cin>>n>>m;
        vector<int> u(n,1),f(n,4),r(n,2);
        while(m--){
                int a,b;
                cin>>a>>b;
                if(b==-1){
                        int temp=f[a-1];
                        f[a-1]=u[a-1];
                        u[a-1]=7-temp;
                }else if(b==-2){
                        int temp=u[a-1];
                        u[a-1]=7-r[a-1];
                        r[a-1]=temp;
                }else{
                        swap(u[a-1],u[b-1]);
                        swap(f[a-1],f[b-1]);
                        swap(r[a-1],r[b-1]);
                }
            //    cout<<"u:"<<u[a-1]<<"f:"<<f[a-1]<<"r:"<<r[a-1];
        }
        for(int i=0;i<n;i++){
                cout<<u[i]<<' ';
        }
}
