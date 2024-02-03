#include <bits/stdc++.h>
using namespace std;


int main() {
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        int ans = 0;
        //Number of maximum horizontal bricks is m/2
        
        ans = (m/2)*n;
        cout << ans << '\n';


    }
    return 0;
}