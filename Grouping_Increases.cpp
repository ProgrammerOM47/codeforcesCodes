#include<bits/stdc++.h>
using namespace std;

int Solve()
{
    int n;
    cin>>n;
    int a,b=INT_MAX,c=INT_MAX;
    int count=0;
    for(int i=0;i<n;i++){
        cin>>a;
        if(a<=b){
            b=a;
        }else if(a<=c){
            c=a;
        }else{
            b=c;
            c=a;
            count++;
        }
    }return count;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        cout<<Solve()<<endl;
    }

}