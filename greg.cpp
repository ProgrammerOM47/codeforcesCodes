#include<iostream>
using namespace std;

#define int long long
#define size 100005

int32_t main(){
    int n,m,k;
    cin>>n>>m>>k;
    int a[n+1]={0};

    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    int l[size],r[size],d[size];

    for(int i=1;i<=m;i++){
        cin>>l[i]>>r[i]>>d[i];
    }
    //queries ka input lelo and then i resolve the query range
    //konsa operation aapko kitni baar krna hai
    int op[size]={0};
    for(int i=0;i<k;i++){
        int x,y;
        cin>>x>>y;
        op[x]+=1;
        op[y+1]-=1;
    }
    for(int i=1;i<=m;i++){
        op[i]=op[i-1]+op[i];
    }
    int p[size]={0};
    for(int i=1;i<=size;i++){
        p[l[i]]+=(op[i]*d[i]);
        p[r[i]+1]-=(op[i]*d[i]);
    }
    for(int i=1;i<=size;i++){
        p[i]=p[i-1]+p[i];

    }
    //add the p array in my original array
    for(int i=1;i<=n;i++){
        a[i]+=p[i];
    }
    //print the resulted array
    for(int i=1;i<=n;i++){
        cout<<a[i]<<" ";
    }
    



}


