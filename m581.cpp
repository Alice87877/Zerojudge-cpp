//https://zerojudge.tw/ShowProblem?problemid=m581
#include <iostream>

using namespace std;

int main(){
    int peple[19],n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>peple[i];
    }
    int m;
    bool killflag=0;
    while(cin>>m && m!=0){
        if(peple[m-1]==-2){
            killflag=1;
        }
        peple[m-1]=-2;
    }
    if(killflag){
        cout<<"Wrong";
    }else{
        bool flag=0;
        for(int i=0;i<n;i++){
            if(peple[i]==-1){
                flag=1;
                break;
            }
        }
        if(flag) cout<<"Werewolves";
        else cout<<"Townsfolk";
    }
    return 0;
}

