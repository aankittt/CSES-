#include<bits/stdc++.h>
using namespace std;

#define ll long long 
//using pow function
long long pow(int x,int y)
{
	ll ans=1;
	while(y){
	if(y%2==0)
	{
		ans=ans*ans;
		y=y/2;
	}
	else
	{
		ans=ans*x;
		y--;
	}
}
return ans;
	
}
int main()
{
	ll n;
	cin>>n;
	ll s=1;
	//using mod operator
	for(int i=0;i<n;i++)
	{
		s=2*s%((int)1e9+7);
	}
	cout<<s;
	
	//cout<<pow(2,n)<<endl;
	
}
