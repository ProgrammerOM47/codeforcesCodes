#include<bits/stdc++.h>
using namespace std;

int main(){
    string bp;
    cin>>bp;
    int l=bp.length();
    int m;
    cin>>m;
    int p[l+2]={0};
    for(int i=1;i<=m;i++){
        int revoir;
        cin>>revoir;
        int s=revoir;
        int e=l-revoir+1;
        p[s]+=1;
        p[e+1]-=1;
    }
    for(int i=1;i<=(l+1);i++){
        p[i]=p[i]+p[i-1];
    }
    int s1=0;
    int e1=l-1;
    while(s1<e1){
        if(p[s1+1]%2!=0 && p[e1+1]%2!=0){
            swap(bp[s1],bp[e1]);
            s1++,e1--;
        }else if(p[s1+1]%2==0){
            s1++;
        }else if(p[e1+1]%2==0){
            e1--;
        }

    }
    cout<<bp;
    

}