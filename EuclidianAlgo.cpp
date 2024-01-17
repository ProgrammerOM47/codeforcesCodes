#include<bits/stdc++.h>
using namespace std;
#define int long long

int x,y,GCD;


void EED(int a,int b){
    if(b==0){
        x=1,y=0,GCD=a;
        return;

    }
    EED(b,a%b);

    int current_x=y;
    int current_y=x-((a/b)*y);

    x=current_x;
    y=current_y;
    return;
}
// int GCD1(int a,int b){
//     if(b==0){
//         return a;   
//     }
//     return GCD1(b,a%b);
// }
int MMI(int a,int m){
    if(__gcd(a,m)!=1){
        cout<<"MMI Does not Exist "<<endl;
        return 0;
    }
    EED(a,m);
    return (x+m)%m; //This MMI will always be +ve

    
}
int32_t main(){
    // int a=30,b=18;
    // EED(a,b);
    // cout<<x<<" "<<y<<endl;
    cout<<MMI(6,7);
}
