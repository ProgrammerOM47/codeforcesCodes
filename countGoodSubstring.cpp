#include<bits/stdc++.h>
using namespace std;
const int N=0;

#define int long long
// this saves char x-a(0),b(1) stored at y-even(0) ,odd(1) ;

int Count[2][2]={{0,0},{0,0}};
void count_good_substring(string s){
    int n=s.length();
    int even=0,odd=0;

    for(int i=0;i<n;i++){//iterate index
        
        odd++;//for individual char of length 1
        if(i%2==1){
            // add elem at [odd index] or [even place]
            char ch=s[i];
            int char_index=s[i]-'a';//a - 0
            odd +=Count[char_index][1];// odd index for odd length
            Count[char_index][1]++;//odd
            even +=Count[char_index][0];//even index for even length
            
            
        }else{
            // add elem at [even index] or [odd place]
            char ch=s[i];
            int char_index=s[i]-'a';//a - 0
            odd +=Count[char_index][0];// even index for odd length
            Count[char_index][0]++;//even
            even +=Count[char_index][1];//odd index for even length

            
        }
    }
    cout<<even<<" "<<odd<<endl;

}
int32_t main(){
    string s;
    cin>>s;

    count_good_substring(s);

}