//https://zerojudge.tw/ShowProblem?problemid=d365
#include<bits/stdc++.h>
using namespace std;

void dfs(int nowi,int nowj,char c,vector<vector<char>>& world,vector<vector<bool>>& flag,int h,int w){
    flag[nowi][nowj]=true;
    if(nowi+1<h && world[nowi+1][nowj]==c && flag[nowi+1][nowj]==false) dfs(nowi+1,nowj,c,world,flag,h,w);
    if(nowi-1>=0 && world[nowi-1][nowj]==c && flag[nowi-1][nowj]==false) dfs(nowi-1,nowj,c,world,flag,h,w);
    if(nowj+1<w && world[nowi][nowj+1]==c && flag[nowi][nowj+1]==false) dfs(nowi,nowj+1,c,world,flag,h,w);
    if(nowj-1>=0 && world[nowi][nowj-1]==c && flag[nowi][nowj-1]==false) dfs(nowi,nowj-1,c,world,flag,h,w);
}

bool cmp(const pair<char,int>& a,const pair<char,int>& b){
    if(a.second!=b.second) return a.second>b.second;
    return a.first < b.first;
}

int main(){
    int N;
    cin>>N;
    for(int times=1;times<=N;times++){
        int h,w;
        cin>>h>>w;
        vector<vector<char>> world(h,vector<char>(w));
        vector<vector<bool>> flag(h,vector<bool>((w),false));
        map<char,int> ans;
        for(int i=0;i<h;i++){
            for(int j=0;j<w;j++){
                cin>>world[i][j];
            }
        }
        for(int i=0;i<h;i++){
            for(int j=0;j<w;j++){
                if(flag[i][j]==false){
                    flag[i][j]=true;
                    ans[world[i][j]]++;
                    dfs(i,j,world[i][j],world,flag,h,w);
                }
            }
        }

        vector<pair<char,int>> fans(ans.begin(),ans.end());
        sort(fans.begin(),fans.end(),cmp);
        cout<<"World #"<<times<<'\n';
        for(auto& a : fans){
            cout<<a.first<<": "<<a.second<<'\n';
        }
    }
}