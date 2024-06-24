//https://zerojudge.tw/ShowProblem?problemid=e948

#include <bits/stdc++.h>
using namespace std;

int main(){
    double n,g,a,h,w;
    cin>>n;
    while(n--){
        cin>>g>>a>>h>>w;
        double ans;
        if(g){
            ans=13.7*w+5.0*h-6.8*a+66;
        }else{
            ans=9.6*w+1.8*h-4.7*a+655;
        }
        printf("%.2f\n",ans);
    }
}
