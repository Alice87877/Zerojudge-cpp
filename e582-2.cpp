//https://zerojudge.tw/ShowProblem?problemid=e582
//GPT教我的可能更簡便的寫法 substr
#include<bits/stdc++.h>
using namespace std;

map<char,int> m{
    {'C',0},{'D',1},{'S',2},{'H',3},{'T',10},{'J',11},{'Q',12},{'K',13},{'A',15}
};

bool cmp(string a,string b){
    if(a[0]!=b[0]){
        return m[a[0]]<m[b[0]];
    }
    int x,y;
    if(isdigit(a[1])){
        x=a[1]-'0';
    }else{
        x=m[a[1]];
    }
    if(isdigit(b[1])){
        y=b[1]-'0';
    }else{
        y=m[b[1]];
    }
    return x<y;
}

void printvec(vector<string> a){
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<' ';
    }
    cout<<'\n';
}

int main(){
    char first;
    string inpu,whytwolinewtf;
    vector<string> vec1,vec2,vec3,vec4;
    while(cin>>first && first!='#'){
        inpu="";
        vec1.clear(); vec2.clear(); vec3.clear(); vec4.clear();
        cin>>whytwolinewtf;
        inpu+=whytwolinewtf;
        cin>>whytwolinewtf;
        inpu+=whytwolinewtf;
        for(int i=0;inpu[i];i+=8){
            vec1.push_back(inpu.substr(i,2));
            vec2.push_back(inpu.substr(i+2,2));
            vec3.push_back(inpu.substr(i+4,2));
            vec4.push_back(inpu.substr(i+6,2));
        }
        sort(vec1.begin(),vec1.end(),cmp);
        sort(vec2.begin(),vec2.end(),cmp);
        sort(vec3.begin(),vec3.end(),cmp);
        sort(vec4.begin(),vec4.end(),cmp);
        if(first=='N'){
            cout<<"S: "; printvec(vec2);
            cout<<"W: "; printvec(vec3);
            cout<<"N: "; printvec(vec4);
            cout<<"E: "; printvec(vec1);
        }else if(first=='E'){
            cout<<"S: "; printvec(vec1);
            cout<<"W: "; printvec(vec2);
            cout<<"N: "; printvec(vec3);
            cout<<"E: "; printvec(vec4);
        }else if(first=='S'){
            cout<<"S: "; printvec(vec4);
            cout<<"W: "; printvec(vec1);
            cout<<"N: "; printvec(vec2);
            cout<<"E: "; printvec(vec3);
        }else{
            cout<<"S: "; printvec(vec3);
            cout<<"W: "; printvec(vec4);
            cout<<"N: "; printvec(vec1);
            cout<<"E: "; printvec(vec2);
        }
    }
}