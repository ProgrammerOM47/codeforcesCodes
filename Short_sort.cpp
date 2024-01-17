#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        bool val=false;
        int i=0;
        while(s[i]!='\0'){
            if(s=="abc"){
                val=true;

                break;
            }
            if(s[i]=='a' && i==0){
                swap(s[i+1],s[i+2]);
                
            }
            else if(s[i]=='b' && i==1){
                swap(s[i-1],s[i+1]);
               
                

            }else if(s[i]=='c' && i==2){
                swap(s[i-2],s[i-1]);
                

            }
            i++;
        }
        
        if(val==true || s=="abc"){
            cout<<"Yes"<<endl;
        }else{
            cout<<"No"<<endl;
        }

    }
}