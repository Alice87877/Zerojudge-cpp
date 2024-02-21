//https://zerojudge.tw/ShowProblem?problemid=c079

#include <iostream>
using namespace std;

int main(){
    int a,b;
    while(cin>>a>>b){
        int sum=0,c=0;
        while(a!=0){
            sum++;
            c++;
            if(c==b){
                c=0;
                a++;
            }
            a--;
        }
        cout<<sum<<"\n";
    }
    return 0;
}
