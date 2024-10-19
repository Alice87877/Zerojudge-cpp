//https://zerojudge.tw/ShowProblem?problemid=c110
#include <bits/stdc++.h>
using namespace std;

int main(){
     int a[6];
     while(true){
        int isz=0;
        for(int i=0;i<6;i++){
            cin>>a[i];
            isz+=a[i];
        }
        if(isz==0) break;
        int ans=a[5];
        while(a[4]>0){
            ans++;
            a[0]-=11;
            a[4]--;
        }
        while(a[3]>0){
            ans++;
            a[3]--;
            if(a[1]>=5){
                a[1]-=5;
            }else if(a[1]>0){
                a[0]-=20-(4*a[1]);
                a[1]=0;
            }else if(a[0]>0){
                a[0]-=20;
            }
        }
        while(a[2]>0){
            ans++;
            if(a[2]>=4){
                a[2]-=4;
            }else if(a[2]==3){
                if(a[1]>0){
                    a[1]-=1;
                    a[0]-=5;
                }else{
                    a[0]-=9;
                }
                a[2]=0;
            }else if(a[2]==2){
                if(a[1]>0){
                    a[1]-=3;
                    a[0]-=6;
                }else{
                    a[0]-=18;
                }
                a[2]=0;
            }else if(a[2]==1){
                if(a[1]>0){
                    a[1]-=5;
                    a[0]-=7;
                }else{
                    a[0]-27;
                }
                a[2]=0;
            }
        }
        while(a[1]>0){
            ans++;
            if(a[1]>=9){
                a[1]-=9;
            }else if(a[1]>0){
                a[0]-=36-4*a[1];
                a[1]=0;
            }
        }
        while(a[0]>0){
            ans++;
            a[0]-=36;
        }
        cout<<ans<<'\n';
     }
}
