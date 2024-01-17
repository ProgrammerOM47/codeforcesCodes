#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        string x, s;
        cin >> x >> s;
        int count=-1;
        bool val=true;
        for(int i=0;i<=m && x.size()<=200;i++){
            if(x.find(s)!=-1){
                cout<<i<<endl;
                val=false;
                break;
                
            }
            x+=x;
        }
        if(val){
            cout<<"-1"<<endl;
        }
        
    }
}