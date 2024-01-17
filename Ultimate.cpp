#include<bits/stdc++.h>
using namespace std;
#define int long long
const int P=5;

class Modulus
{
    public:
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
};

int32_t main(){
    int x,y;
    cin>>x>>y;
    Modulus m;
    cout<<m.Addition(x,y)<<endl;
    cout<<m.Substraction(x,y)<<endl;
    cout<<m.Multiply(x,y)<<endl;
    cout<<m.Division(x,y)<<endl;


}
