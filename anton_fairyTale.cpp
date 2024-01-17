#include<bits/stdc++.h>
using namespace std;
#define int long long 

int32_t main(){
    int n,m;
    cin>>n>>m;

    int ans; //first dat when barn becomes empty

    if(m>=n){
        cout<<n<<endl;
        return 0;
    }else{
        /*
            n>m
            WE want to search for k that satisfy the equation
        */
       int s=0;
       int e=1e10;
       int target=n-m;
       while(s<=e){
        int mid=(s+e)/2;
        int d=(mid*(mid+1))/2;

        if(d>=target){
            //above statement means that the barn becomes zero
            /*
                Hence this could be my first day when barn becomes empty
                hence I will store this day and look for a even value that satidy this
                equation as I want the min value
            */
            ans=mid; 
            e=mid-1;

        }else{
            //this day means nothing to me and I know for sure I dom't need to store this value
            s=mid+1;
        }
       }
    }
    cout<<ans+m<<endl;

    
}

