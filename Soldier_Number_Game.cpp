#include <bits/stdc++.h>
using namespace std;
long long a[5555555];
int main()
{
	ios_base::sync_with_stdio(false);  cin.tie(0);
	for(long i=2;i<=5000000;++i)
	{		
		if(!a[i])
		{	
		for(long j=i;j<=5000000;j+=i)
		    a[j] = a[j/i]+1;
    	}
	}
	for(long i=2;i<=5000000;++i)
	a[i]+=a[i-1];
	int t;  cin>>t;
	while(t--)
	{
		long long ai ,b;  cin>>ai>>b;
		cout<<a[ai]-a[b]<<"\n";
	}
}