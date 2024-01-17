#include<iostream>
#include<algorithm>
#include<vector>
#include<stack>
#include<queue>
#include<map>
using namespace std;
class helmet{
    public:
    long long int a,b;
};
bool cmp(helmet & x, helmet & y){
    return x.b < y.b;
}
int main(){
    int t=0;
    cin>>t;
    while(t--){
        long long int n=0,p;
        cin>>n>>p;
        vector<helmet> hemets(n);
        for(int i = 0; i < n; i++){
            long long int item = 0;
            cin>>item;
            hemets[i].a = item;
        }
        for(int i = 0; i < n ;i ++){
            long long int item;
            cin>>item;
            hemets[i].b = item;
        }
        long long int ans = p;
        long long int num = 1;
        long long int ptr = 0;
        sort(hemets.begin(),hemets.end(),cmp);
        while(ptr < n && hemets[ptr].b < p && num < n){
            if(hemets[ptr].a > n-num){
                ans += (n - num)*hemets[ptr].b;
            }
            else
            ans += (hemets[ptr].a)*hemets[ptr].b;
            num += hemets[ptr].a;
            ptr++;
        }
        while(num < n){
            ans += p;
            num++;
        }
        cout<<ans<<endl;
    }
}