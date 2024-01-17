#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int min=INT_MAX;
        int max=INT_MIN;
        int count=0;
        vector<int>vec;
        while(n--){
            int a,x;
            cin>>a>>x;
            if(a==1){
                if(x>=max){
                    max=x;
                }
            }else if(a==2){
                if(x<=min){
                    min=x;
                }
            }else if(a==3){
                vec.push_back(x);
            }

        }
        for(int i=0;i<vec.size();i++){
            if(vec[i]>=max && vec[i]<=min){
                count++;
            }
        }
        int ans=(min-max+1)-count;
        if(ans<=0){
            cout<<0<<endl;
        }else{
            cout<<ans<<endl;
        }
    }

}
