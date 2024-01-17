#include<bits/stdc++.h>
using namespace std;
#define int long long
// Count[0][0]== Character is and position is even
//count[0][1]==character is a and position is odd
//Count[1][0]==Character is b and position is even
//Count[1][1]==Characcter is b and position is odd
int Count[2][2]={{0}};
void Count_Good_Substring(string s){
    int n=s.length();
    int Even=0,Odd=0;
    for(int i=0;i<n;i++){
        Odd++;
        if(i%2==1){
            char Ch=s[i];
            int Ch_Index=s[i]-'a';
            Odd+=Count[Ch_Index][1];
            Count[Ch_Index][1]++;
            Even+=Count[Ch_Index][0];

        
        }else{
            char Ch=s[i];
            int Ch_Index=s[i]-'a';
            Odd+=Count[Ch_Index][0];
            Count[Ch_Index][0]++;
            Even+=Count[Ch_Index][1];

        }
    }cout<<Even<<" "<<Odd<<endl;
}


int32_t main(){
    string s;
    cin>>s;
    Count_Good_Substring(s);

    

}
