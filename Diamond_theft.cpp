#include<bits/stdc++.h>
using namespace std;
class camera{
    public:
        int t,s;
        
};
int main(){
    int n;
    cin>>n;
    vector<camera>cam(n);
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        cam[i].t=a;
        cam[i].s=b;
    }
    int ans=0;
    bool is_stolen=false;
    bool first_stolen=false;
    int ptr=0;
    int count=0;
    while(!is_stolen){
        if((cam[ptr].t==1 || cam[ptr].t==3) && !first_stolen){
            ans++;
            cout<<ans<<"->"<<ptr<<endl;
        }else if(first_stolen && (cam[ptr].t==2 || cam[ptr].t==3)){
            ans++;
            cout<<ans<<"->''"<<ptr<<endl;
            
        }
        
        ptr++;
        if(ptr==(n)){
            count++;
            ans++;
            first_stolen=true;
            ptr=0;
        }
        if(count==2){
            is_stolen=true;
        } 
        
    }
    cout<<ans<<endl;

}
