//https://zerojudge.tw/ShowProblem?problemid=d750
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    while(cin>>n && cin>>m){

        if(n==0 && m==0){
            cout<<"0 0";
            return 0;
        }

        int a[10001],b[10001],n1=0,n2=0,N;
        for(int i=0;i<n;i++){
            cin>>N;
            if(N%2==1){
                a[n1]=N;
                n1++;
            }else{
                b[n2]=N;
                n2++;
            }
        }

        sort(a,a+n1,greater<int>());
        sort(b,b+n2);

        for(int i=n1,j=0;i<n;i++,j++){
            a[i]=b[j];
        }

        for(int i=0;i<n-1;i++){
            for(int j=0;j<n-i-1;j++){
                if(a[j]%m>a[j+1]%m){
                    swap(a[j],a[j+1]);
                }
            }
        }

        
        cout<<n<<' '<<m<<'\n';
        for(int i=0;i<n;i++){
            cout<<a[i]<<"\n";
        }

    }
}