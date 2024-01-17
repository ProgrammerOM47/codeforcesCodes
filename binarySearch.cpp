#include<bits/stdc++.h>
using namespace std;
int target;
bool Linear(int * a,int n){
    for(int i=0;i<n;i++){
        if(a[i]==target){
            return true;
        }
    }return false;
}
bool Binary(int * a,int n){
    int s=0;
    int e=n-1;
    while(s<=e){
        int mid=(s+e)/2;
        // int mid=s+(e-s)/2
        if(a[mid]==target){
            return true;
        }else if(a[mid]>target){
            e=mid-1;
        }else{
            s=mid+1;
        }
    }return false;
}
//Always define the search space first
//Jab tak search space valid hai tab tak searching ka task perform karo

//This function will give me the first index that is greater than or equal to x
int Lower_Bound(int * a,int n){
    int s=0;
    int e=n-1;
    int ans=-1;
    while(s<=e){
        int mid=(s+e)/2;
        if(a[mid]>=target){
            ans=mid;
            e=mid-1;
        }else{
            s=mid+1;
        }
    }
    return ans;
}
//This function will give me the first index that is greater than x
int Upper_Bound(int * a,int n){
    int s=0;
    int e=n-1;
    int ans=-1;
    while(s<=e){
        int mid=(s+e)/2;
        if(a[mid]>target){
            ans=mid;
            e=mid-1;
        }else{
            s=mid+1;
        }
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    int a[n];
    cin>>target;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    bool x=Linear(a,n);
    if(x==1){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
    bool t=Binary(a,n);
    if(t==1){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
    int ans=Lower_Bound(a,n);
    if(ans==-1){
        cout<<n<<endl;
    }else{
        cout<<ans<<endl;

    }
    int ans1=Upper_Bound(a,n);
    if(ans==-1){
        cout<<n<<endl;
    }else{
        cout<<ans<<endl;

    }
    /*if there are no elemts present inside the array that are greater than or
    equal to ,to the element x just return the size of array i.e this signify 
    ki saare elements chote hai */ 
    //STL;
    cout<<binary_search(a,a+n,target);
    cout<<lower_bound(a,a+n,target)-a<<endl;
    cout<<upper_bound(a,a+n,target)-a<<endl;

}