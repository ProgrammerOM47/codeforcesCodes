#include<iostream>
#include<string>
using namespace std;

int main(){
    int n,count=0;
    cin>>n;
    while(n--){
        string s;
        cin>>s;
        if(s[0]=='+' || s[s.length()-1]=='+'){
            count++;

        }else{
            count--;
        }

    }
    cout<<count<<endl;
}