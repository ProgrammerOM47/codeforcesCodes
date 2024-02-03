#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=1e6+5;
const int P=5;
int Addition(int x, int y)
{
    return (x + y) % P;
}
int Substraction(int x, int y)
{
    return ((x - y) % P + P) % P;
}
// Mulitplicative property of modulo
int Multiply(int x, int y)
{
    return (x * y) % P;
}

int FastPower(int x, int y)
{
    int result = 1;
    while (y)
    {
        if (y % 2 == 1)
        {
            result = Multiply(x, result);
        }
        y /= 2;
        x = Multiply(x, x);
    }
    return result;
}
// Division PRoperty of Modulo
int Division(int x, int y)
{
    return Multiply(x, FastPower(y, P - 2));
}
int Fact[1000001];
//Calculating Long Factorial
int Calculate_Factorial(){
    Fact[0]=1;
    for(int i=1;i<=N;i++){
        Fact[i]=Multiply(Fact[i-1],i);
    }

}
int ncr(int n,int r){
    return Multiply(Multiply(Fact[n],Inverse(Fact[r])),Inverse(Fact[n-r]));
}
int Inverse(int x){
    return FastPower(x,P-2);
}

//(b^-1)%P==Fermat's Little Theorem 


int32_t main(){
    int x,y;
    cin>>x>>y;

    cout<<Addition(x,y)<<endl;
    cout<<Substraction(x,y)<<endl;
    cout<<Multiply(x,y)<<endl;
    cout<<Division(x,y)<<endl;


}
