#include<bits/stdc++.h>
using namespace std;
string s;
int k;
int Solve(char x){
    int start=0;
    int end=0;
    int maximum_substring_length=0;
    int Current_Number_of_Changes=0;
    for(end=0;end<s.length();end++){
       if(s[end]!=x){
            Current_Number_of_Changes++;
        }
        //this is when there are more changes inside the window than that is required
        //So you are shrinking the window as to make only k number of changes
        while(Current_Number_of_Changes>k and start<=end){
            if(s[start]!=x){
                //This is the character that i have assumed to change inside this current window
                //hence aI will move my window ahead of it in order to make required numebr of changes
                Current_Number_of_Changes--;
            }
            start++;
        }
        int Current_window_length=end-start+1;
        maximum_substring_length=max(maximum_substring_length,Current_window_length);
    }
    return maximum_substring_length;

}


int main(){
    int n;
    cin>>n>>k>>s;
    int Option1=Solve('a');
    int Option2=Solve('b');
    cout<<max(Option1,Option2)<<endl;
}
