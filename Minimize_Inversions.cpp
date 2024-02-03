#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        for (int &x : a)
            cin >> x;
        for (int &x : b)
            cin >> x;
        vector<int> pos(n + 1);
        for (int i = 0; i < n; ++i)
            pos[a[i]] = i;
        vector<int> c(n);
        for (int i = 0; i < n; ++i)
            c[i] = pos[b[i]];
        // Now, we need to find the minimum possible number of pairs (i,j) such that i<j and c[i]>c[j].

        
       



        
    }
    return 0;

}