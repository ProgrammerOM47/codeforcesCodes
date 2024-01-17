#include <bits/stdc++.h>
using namespace std;
// #define int long long
bool map1[30] = {0};
void Title(string &s, int k)
{
  int i = 0;
  int j = s.length() - 1;
  while (i < j)
  {
    if (s[i] == '?' and s[j] == '?')
    {
      i++;
      j--;
      continue;
    }
    else if (s[i] == '?' and s[j] != '?')
    {
      s[i] = s[j];
      map1[s[i] - 'a' + 1] = true;
      i++, j--;
    }
    else if (s[i] != '?' and s[j] == '?')
    {
      s[j] = s[i];
      map1[s[i] - 'a' + 1] = true;
      i++, j--;
    }else if(s[i]==s[j]){
      map1[s[i] - 'a' + 1] = true;
      i++, j--;
    }else{
      cout<<"IMPOSSIBLE"<<endl;
      return;
    }
  }
  if(i==j and s[i]!='?'){
    map1[s[i]-'a'+1]=true;
  }
  while(i>=0){
    while(k>1 and map1[k]==true){
      k--;
    }
    if(s[i]=='?' and s[j]=='?'){
      s[i]=s[j]=k-1+'a';
      map1[k]=true;
      i--;
      j++;
    }else{
      i--;
      j++;
    }
  }
  if(k==1 and map1[k]==true){
    cout<<s<<endl;
  }else{
    cout<<"IMPOSSIBLE"<<endl;

  }
}
int main()
{
  int k;
  cin >> k;
  string s;
  cin >> s;
  Title(s, k);

}
