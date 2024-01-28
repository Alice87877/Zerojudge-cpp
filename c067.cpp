//https://zerojudge.tw/ShowProblem?problemid=c067
#include <iostream>

using namespace std;

int main(){

    int n,time;
    while(cin>>n&&n!=0){
        time++;
        int sum=0,a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
        }
        int avg=sum/n;
        sum=0;
        for(int i=0;i<n;i++){
            if(a[i]>avg){
                sum+=a[i]-avg;
            }
        }
        cout<<"Set #"<<time<<"\nThe minimum number of moves is "<<sum<<".\n";
    }
    return 0;
}
