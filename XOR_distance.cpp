#include "bits/stdc++.h"
using namespace std;
template<typename T1, typename T2> istream &operator>>(istream &cin, pair<T1, T2> &a) { return cin>>a.first>>a.second; }
template<typename T1> istream &operator>>(istream &cin, vector<T1> &a) { for (auto &x:a) cin>>x; return cin; }
template<typename T1> istream &operator>>(istream &cin, valarray<T1> &a) { for (auto &x:a) cin>>x; return cin; }
template<typename T1, typename T2> ostream &operator<<(ostream &cout, const pair<T1, T2> &a) { return cout<<a.first<<' '<<a.second; }
template<typename T1, typename T2> ostream &operator<<(ostream &cout, const vector<pair<T1, T2>> &a) { for (auto &x:a) cout<<x<<'\n'; return cout; }
template<typename T1> ostream &operator<<(ostream &cout, const vector<T1> &a) { int n=a.size(); if (!n) return cout; cout<<a[0]; for (int i=1; i<n; i++) cout<<' '<<a[i]; return cout; }
template<typename T1, typename T2> bool cmin(T1 &x, const T2 &y) { if (y<x) { x=y; return 1; } return 0; }
template<typename T1, typename T2> bool cmax(T1 &x, const T2 &y) { if (x<y) { x=y; return 1; } return 0; }
template<typename T1> vector<T1> range(T1 l, T1 r, T1 step=1) { assert(step>0); int n=(r-l+step-1)/step, i; vector<T1> res(n); for (i=0; i<n; i++) res[i]=l+step*i; return res; }
template<typename T1> basic_string<T1> operator*(const basic_string<T1> &s, int m) { auto r=s; m*=s.size(); r.resize(m); for (int i=s.size(); i<m; i++) r[i]=r[i-s.size()]; return r; }
#if !defined(ONLINE_JUDGE)&&defined(LOCAL)
#include "my_header\debug.h"
#else
#define dbg(...) ;
#define dbgn(...) ;
#endif
typedef unsigned int ui;
typedef double db;
typedef long long ll;
#define all(x) (x).begin(),(x).end()
// template<typename T1,typename T2> void inc(T1 &x,const T2 &y) { if ((x+=y)>=p) x-=p; }
// template<typename T1,typename T2> void dec(T1 &x,const T2 &y) { if ((x+=p-y)>=p) x-=p; }
const int N=1e6+5;
int main()
{
	ios::sync_with_stdio(0); cin.tie(0);
	cout<<fixed<<setprecision(15);
	int T; cin>>T;
	while (T--)
	{
		ll a, b, r, i;
		cin>>a>>b>>r;
		for (i=59; i>=0; i--) if ((a^b)>>i&1) break;
		auto solve=[&](ll x, ll y, ll i, ll r) -> ll
			{
				if (r<0) return 9e18;
				for (; i>=0; i--) if ((r>>i)&&(1^x>>i&1)&&(y>>i&1))
				{
					x^=1ll<<i;
					y^=1ll<<i;
					r-=1ll<<i;
				}
				return y-x;
			};
		cout<<min(solve(min(a, b), max(a, b), i-1, r), solve(max(a, b)^1ll<<i, min(a, b)^1ll<<i, i-1, r-(1ll<<i)))<<'\n';
	}
}