#include<bits/stdc++.h>
using namespace std;
int target;
int ans=INT_MAX;
void Function(int a,int b,int count){
    if(a==1 and b==1){
        ans=min(ans,count);
    }
    if(a-b>0){
        Function(a-b,b,count+1);
    }
    if(b-a>0){
        Function(a,b-a,count+1);
    }
    return;
}

void Pair(){
    if(target==1){
        ans=0;
        return;
    }
    //Target: kaise form hota hia
    for(int i=1;i<target;i++){
        Function(i,target-i,1);
    }
}

int main(){

    cin>>target;
    Pair();
    cout<<ans<<endl;
}
