//https://zerojudge.tw/ShowProblem?problemid=e969

#include <iostream>
using namespace std;

int main(){
    int money,t,k;cin>>money>>t>>k;
    int time=0,eat=1;
    while(eat==1){
        if(k==0){
            if(money>=32){
                cout<<time<<": Wayne eats an Apple pie, and now he";
                money-=32;
                if(money==0){
                    cout<<" doesn't have money.";
                }else if(money==1){
                    cout<<" has 1 dollar.\n";
                }else{
                    cout<<" has "<<money<<" dollars.\n";
                }
                k=1;
                time+=t;
            }else{
                break;
            }
        }
        else if(k==1){
            if(money>=55){
                cout<<time<<": Wayne drinks a Corn soup, and now he";
                money-=55;
                if(money==0){
                    cout<<" doesn't have money.";
                }else if(money==1){
                    cout<<" has 1 dollar.\n";
                }else{
                    cout<<" has "<<money<<" dollars.\n";
                }
                k=0;
                time+=t;
            }else{
                break;
            }
        }
    }
    if(time==0){
        cout<<"Wayne can't eat and drink.";
    }

    return 0;
}
