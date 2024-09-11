//https://zerojudge.tw/ShowProblem?problemid=m931
//APCS2024年一月第一題
#include<bits/stdc++.h>
using namespace std;

struct point{
    int a;
    int b;
    int c;
};

bool cmp(point a,point b){
    return a.c>b.c;
}

int main(){
    int n;
    cin>>n;
    point p[21];
    for(int i=0;i<n;i++){
        cin>>p[i].a>>p[i].b;
        p[i].c=p[i].a*p[i].a+p[i].b*p[i].b;
    }
    sort(p,p+n,cmp);
    cout<<p[1].a<<' '<<p[1].b;
}