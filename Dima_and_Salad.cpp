#include<bits/stdc++.h>
using namespace std;
#define int long long

int *taste,*calorie;
int n,k;
int Dima_and_Salad(int i,int sum){
    if(i==n){
        if(sum==0){
            return 0;
        }else{
            //This path can never become my ans
            return -1e12;
        }
    }
    //if I had chosen the current ith fruit what will be my taste
    int Option1=taste[i]+Dima_and_Salad(i+1,sum+taste[i]-k*calorie[i]);

    int Option2=0+Dima_and_Salad(i+1,sum);
    return max(Option1,Option2);
}
int32_t main(){
    cin>>n>>k;
    taste=new int[n];
    calorie=new int[n];
    for(int i=0;i<n;i++){
        cin>>taste[i];
    }
    for(int i=0;i<n;i++){
        cin>>calorie[i];
    }
    int ans=Dima_and_Salad(0,0);
    if(ans<=0){
        cout<<-1<<endl;
    }else{
        cout<<ans<<endl;
    }

    

}
