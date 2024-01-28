//https://zerojudge.tw/ShowProblem?problemid=a010
#include <iostream>

using namespace std;

int main(){

   int n,i=2;
   cin>>n;
   bool flag=true;
   while(n!=1){
        int time=0;
        while(n%i==0){
            if(time==0&&flag){
                cout<<i;
                time++;
                n/=i;
                flag=false;
            }else if(time==0){
                cout<<" * "<<i;
                time++;
                n/=i;
            }else{
                time++;
                n/=i;
            }
        }
        if(time>1){
            cout<<"^"<<time;
        }
        i++;
   }

    return 0;
}
