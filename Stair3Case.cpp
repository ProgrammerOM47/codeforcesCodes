#include<bits/stdc++.h>
using namespace std;
int ans=INT_MAX;

void Stair3Case(int *a,int n,int stair,int step,bool *visited){
    if(stair==n){
        ans=min(ans,step);
        return;
    }
    visited[stair]=1;
    if(stair+1<n and visited[stair+1]==0){
        Stair3Case(a,n,stair+1,step+1,visited);
    }
    if(stair+a[stair]<=n and stair+a[stair]>=0 and visited[stair+a[stair]]==0){
        Stair3Case(a,n,stair+a[stair],step+1,visited);
    }
    //Backstack
    visited[stair]=0;
    return;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        bool visited[10000]={0};
        int * a=new int[n+1];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        ans=INT_MAX;
        Stair3Case(a,n,0,0,visited);
        cout<<ans<<endl;
    }
}
