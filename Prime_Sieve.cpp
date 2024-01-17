#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
//Prime[i]==1 means current number at i is not a prime number
//Actual Time: O(n*log(log(n)))

// bool Prime[N]={0};
bitset<N>Prime;
/*
    You have N buckets and all of the bucets will
    only contain bits
    By defaiult all the bits are initialised to 0
*/
/*
    Using Bitset

    N*(Sizeofbool)
*/
void Prime_Sieve(int n){
    for(int i=3;i*i<n;i+=2){
        if(Prime[i]==0){
            for(int j=i*i;j<=n;j+=i){
                Prime[j]=1;
            }
        }
    }
    cout<<2<<" ";
    for(int i=3;i<=n;i+=2){
        if(Prime[i]==0){
            cout<<i<<" ";
        }
    }
}
int main(){
    int n;
    cin>>n;
    Prime_Sieve(n);

    

}
