#include<bits/stdc++.h>
using namespace std;

#define ll long long 


int main()
{
	ll n ;
	cin>>n;
	int ans=0;
	for(ll i=1;i<=n;i++)
	ans^=i;
	
	for(ll i=0;i<n-1;i++)
	{
		int b;
		cin>>b;
		ans=ans^b;
	}
	
	cout<<ans;
	
	
}
