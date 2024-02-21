//https://zerojudge.tw/ShowProblem?problemid=d189

#include <iostream>
using namespace std;

int main(){
    int n;
    while(cin>>n){
        int m=1,sum=0;
        while(n!=0){
            sum++;
            m++;
            if(m>=3){
                m-=3;
                n++;
            }
            n--;
        }
        cout<<sum<<"\n";
    }
    return 0;
}
