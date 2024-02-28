//https://zerojudge.tw/ShowProblem?problemid=a020
#include <iostream>
using namespace std;

int main(){
    int eng[26]={10,11,12,13,14,15,16,17,34,18,19,20,21,22,35,23,24,25,26,27,28,29,32,30,31,33};
    string s;
    int sum=0,n;
    cin>>s;
    n=eng[s[0]-'A'];
    sum+=n/10+9*(n%10);
    for(int i=1,j=8;i<=8;i++,j--){
        sum+=j*(s[i]-'0');
    }
    sum+=s[9]-'0';
    if(sum%10==0) cout<<"real";
    else cout<<"fake";
    return 0;
}

