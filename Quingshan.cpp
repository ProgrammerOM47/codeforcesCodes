#include<bits/stdc++.h>
using namespace std;
const int N=0;
int n,m;
bool check_isgood(string str){
    
    for(int i=0;i<str.length()-1;i++){

        if(str[i]==str[i+1]){
          return false;
        }else{
            continue;
        }
    }
    return true;

}
void isGood(string s , string t){
        
        if(check_isgood(s)){
           cout<<"Yes"<<endl;
           return;
        }
         if(!(check_isgood(t))){
            cout<<"No"<<endl;
            return;
        }
        string res="";
        res+=s[0];
        for(int i=1;i<n;i++){
            
            if(s[i-1] == s[i]){
               string temp=res;
               temp+=t;
               temp+=s.substr(i);
               if(check_isgood(temp)){
                  cout<<"Yes"<<endl;
                  return ;
               }else{
                   res+=t;
                   res+=s[i];
                   continue;
               }
            }else{
                res+=s[i];
                continue;
            } 
        }
        // cout<<res<<" ";
         if(check_isgood(res)){
            cout<<"Yes"<<endl;
        }else{
            cout<<"No"<<endl;
        }
}
int main(){
    int test;
    cin>>test;
    
    string s;
    string t;
    string ans[test];
    while(test--){
        cin>>n>>m;
        
        cin>>s>>t;
         
        if(n==1 || n==0){
            cout<<"Yes"<<endl;
            continue;
        }
        
        isGood(s,t);
        // isGood(s,t);
    }
    // iterate s
    
   
}