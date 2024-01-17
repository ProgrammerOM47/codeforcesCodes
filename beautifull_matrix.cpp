#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int mat[5][5];
    int val=0;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>mat[i][j];
            if(mat[i][j]==1){
                val=abs(i-2)+abs(j-2);

            }
        }
    }
    cout<<val<<endl;
}