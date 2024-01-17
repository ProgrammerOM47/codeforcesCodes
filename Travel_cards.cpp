#include<bits/stdc++.h>
using namespace std;
#define int long long
int Travel_cards(){
    int n,a,b,k,f;
    cin>>n>>a>>b>>k>>f;
    /*
        map: Key is a pair and value is a int
        starting point and ending point
    */
   map<pair<string,string>,int>mp;
   string Prev_dest="";
   for(int i=0;i<n;i++){
    string Starting_Point,Ending_Point;
    cin>>Starting_Point>>Ending_Point;
    int Journey_Cost=0;
    if(Prev_dest==Starting_Point){
        Journey_Cost=b;
    }else{
        Journey_Cost=a;
    }
    Prev_dest=Ending_Point;
    if(Starting_Point>Ending_Point){
        swap(Starting_Point,Ending_Point);
    }
    if(mp.count({Starting_Point,Ending_Point})==1){
        mp[{Starting_Point,Ending_Point}]+=Journey_Cost;
    }else{
        mp[{Starting_Point,Ending_Point}]=Journey_Cost;
    }

   }
   vector<int>Trip_Cost;
   int Total_Cost=0;
   for(auto x:mp){
    Trip_Cost.push_back(x.second);
    Total_Cost+=x.second;
   }
   sort(Trip_Cost.rbegin(),Trip_Cost.rend());
   for(int i=0;i<k and i<Trip_Cost.size();i++){
    if(Trip_Cost[i]>=f){
        Total_Cost=Total_Cost-Trip_Cost[i]+f;
    }else{
        break;
    }
   }
   return Total_Cost;
}


int32_t main(){
    cout<<Travel_cards()<<endl;

}
