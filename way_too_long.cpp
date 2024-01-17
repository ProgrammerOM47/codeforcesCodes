#include<iostream>
#include<string>
using namespace std;

int main(){
    int n;
    cin>>n;
    while(n--){
        string s,res="";
        cin>>s;
        int l=s.length();
        
        if(l>10){
            res+=s[0];
            res+=to_string(l-2);
            res+=s[l-1];
            cout<<res<<endl;
        }else{
            cout<<s<<endl;
        }
            

    }
    return 0;
}