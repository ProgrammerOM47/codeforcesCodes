#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
#define int long long
vector<int>Primes;
bitset<N>P;
bool Segmented_Prime[N]={0};
/*
    If Segmented Prime[i]=1 it means it is not
    as Prime Number
*/
void Prime_Sieve(){
    for(int i=3;i*i<=N;i+=2){
        if(P[i]==0){
            for(int j=i*i;j<=N;j+=i){
                P[j]=1;
            }
        }
    }
    Primes.push_back(2);
    for(int i=3;i<=N;i+=2){
        if(P[i]==0){
            Primes.push_back(i);
        }
    }

}
void Segmented_Sieve(int a,int b){
    int p1[b-a+1]={0};
    //p[i]=1 means i not prime
    //Iterate Over Your Primes array and cur one by one all
    //Multiples of Primes of i
    for(int i=0;Primes[i]*Primes[i]<=b;i++){
        int start=(a/Primes[i])*Primes[i];
        if(start<a){
            start+=Primes[i];
        }
        for(int j=start;j<=b;j+=Primes[i]){
            p1[j-a]=1;
        }
        //Check for the Overlap
        if(start==Primes[i]){
            p1[start-a]=0;
        }
    }
    for(int j=a;j<=b;j++){
        if(p1[j-a]==0){
            cout<<j<<" ";
        }
    }

}

int32_t main(){
    Prime_Sieve();
    int a,b;
    cin>>a>>b;
    Segmented_Sieve(a,b);
    return 0;
}
