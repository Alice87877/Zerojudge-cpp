//https://zerojudge.tw/ShowProblem?problemid=i428
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,mi=100000,ma=-1,xi,yi;
    cin>>n;
    cin>>xi>>yi;
    n--;
    while(n--){
        int xj,yj,a;
        cin>>xj>>yj;
        a=abs(xi-xj)+abs(yi-yj);
        swap(xi,xj);
        swap(yi,yj);
        if(a<mi) mi=a;
        if(a>ma) ma=a;
    }
    cout<<ma<<' '<<mi;
}
