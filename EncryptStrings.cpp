#include<bits/stdc++.h>
using namespace std;
const int N=0;
class Encrypter {
public:
    map<char,string>mp;
    vector<string>dic;
    Encrypter(vector<char>& keys, vector<string>& values, vector<string>& dictionary) {
        for(int i=0;i<keys.size();i++){
            mp[keys[i]]=values[i];
        }
        dic=dictionary;
    }
    
    string encrypt(string word1) {
        string ans="";
        for(int i=0;i<word1.size();i++){
            if(mp.count(word1[i]==0)){
                return "";
            }else{
                ans+=mp[word1[i]];
            }
        }return ans;
    }
    
    int decrypt(string word2) {
        int ans=0;
        for(int i=0;i<dic.size();i++){
            string str=encrypt(dic[i]);
            if(str==word2){
                ans++;
            }
        }
        return ans;
        
    }
};

int main(){
    vector<char>keys;
    vector<string>dictionary,values;
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        char ch;
        cin>>ch;
        keys.push_back(ch);
    }
    for(int i=0;i<n;i++){
        string st;
        cin>>st;
        values.push_back(st);
    }
    for(int i=0;i<m;i++){
        string st;
        cin>>st;
        dictionary.push_back(st);
    }
    Encrypter ans(keys,values,dictionary);
    string word1;
    cin>>word1;
    string word2;
    cin>>word2;
    cout<<ans.encrypt(word1)<<endl;
    cout<<ans.decrypt(word2)<<endl;
     

}
