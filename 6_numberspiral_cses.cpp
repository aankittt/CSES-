#include<bits/stdc++.h>
using namespace std;

#define ll long long 


int main()
{
	ll t;
	cin>>t;
	
	while(t--)
	{
	ll x,y;
	cin>>x>>y;
	
	if(x==y)
	cout<<(x*x)-y+1<<endl;
	else if(y>x)
	{
		if(y&1)
		{
			cout<<(y*y)-x+1<<endl;
		}
		else
		{
			cout<<(y-1)*(y-1)+x<<endl;
		}
	}
	else
	{
		if(x&1)
		{
			cout<<(x-1)*(x-1)+y<<endl;
		}
		else
		{
			cout<<(x*x)-y+1<<endl;
		}
	}
	
		
		
		
	}
}
