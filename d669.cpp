//https://zerojudge.tw/ShowProblem?problemid=d669

#include <iostream>
using namespace std;

int main(){
    int h1,m1,h2,m2;
    while(cin>>h1>>m1>>h2>>m2,h1+m1+h2+m2!=0){
        int m=0,time1=0,time2=0;
        if(h1==0) h1=24;
        if(h2==0) h2=24;
        time1=h1*60+m1;
        time2=h2*60+m2;
        if(time2>=time1){
            m=time2-time1;
        }else{
            m=60*24-time1+time2;
        }
        cout<<m<<"\n";
    }
    return 0;
}
