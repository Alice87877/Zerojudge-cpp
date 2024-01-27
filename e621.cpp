//https://zerojudge.tw/ShowProblem?problemid=e621
#include <iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
            int a,b,c;
            cin>>a>>b>>c;
            bool n=true;
            for(a+=1;a<b;a++){
                if(a%c!=0){
                    cout<<a<<" ";
                    n=false;
                }
            }
            if(n){
                cout<<"No free parking spaces.";
            }
            cout<<"\n";
    }


    return 0;
}
