#include<iostream>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    int i=1,count=0,val;
    while(i<=n){
        int num;
        cin>>num;
        if(num>0 && i<=k){
            count++;
        }
        if(i==k){
            val=num;
        }
        if(i>k && num==val && num>0){
            count++;
        }
        
        i++;
    }
    cout<<count<<endl;
    return 0;
}