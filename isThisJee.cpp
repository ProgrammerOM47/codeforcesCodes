#include<bits/stdc++.h>
using namespace std;
#define PI 3.1415926535
//this represents the slope
double Derivative(double x,double b,double c){
    //basically we are concerned with the sign of this variable value.
    double value=sin(x)*(2*x+b)-(x*x+b*x+c)*(cos(x));
    return value; //value can be greater than 0 or less than zero
}
double IsThisJee(double b,double c){
    double s=0;
    double e=PI/2;
    double ans;
    int count=0;
    while(s<=e){
        double mid=(s+e)/2;
        double val=Derivative(mid,b,c);
        if(val<0){
            ans=mid;
            s=mid;
        }else{
            e=mid;
            ans=mid;

        }
        count++;
        if(count==100){
            break;
        }

    }return ((ans*ans+b*ans+c)/sin(ans));
}
int main(){
    int t;
    cin>>t;
    while(t--){
        double b,c;
        cin>>b>>c;
        double ans=IsThisJee(b,c);

        cout<<setprecision(11)<<ans<<endl;

    }
}
