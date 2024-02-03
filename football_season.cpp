#include <bits/stdc++.h>
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

int32_t main() {
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    int w,d,p,n;
    cin>>w>>d>>p>>n;
    int x,y,z;
    int g=__gcd(w,d);
    if(p%g!=0){
        cout<<"-1"<<endl;
        return 0;
    }
    //let say if he wins all the matches
    if(n*w<p){
        cout<<"-1"<<endl;
        return 0;
    }
    // int p1=p/g;
    // int d1=d/g;
    // int w1=w/g;
    p/=g;
    d/=g;
    w/=g;
    //Y ka Soulution nikalna hai
    y=((p%w)*MMI(d,w))%w;
    x=(p-(d*y))/w;
    //Third Condition for -1
    if(x+y>n){
        cout<<"-1"<<endl;
        return 0;
    }
    z=n-(x+y);
    cout<<x<<" "<<y<<" "<<z<<endl;
    return 0;
}
