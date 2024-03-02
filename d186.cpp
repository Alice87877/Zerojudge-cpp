//https://zerojudge.tw/ShowProblem?problemid=d186
#include <iostream>
using namespace std;

int main(){
    int a,b;
    while(cin>>a>>b && a+b!=0){
        int sum=0;
        for(int i=1;i*i<=b;i++)
            sum++;
        for(int i=1;i*i<a;i++)
            sum--;
        cout<<sum<<'\n';
    }
    return 0;
}

