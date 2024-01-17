#include<bits/stdc++.h>
using namespace std;
bool check(int *arr){
    for(int i=0;i<n-1;i++){
        if(arr[i]!=arr[i+1]){
            return false;
        }
    }
    return true;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        int arr[n];
        int i=0;
        while(i<n){
            cin>>arr[i];
            i++;
        }
        

    }

}