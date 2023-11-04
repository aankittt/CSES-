#include<bits/stdc++.h>
using namespace std;

#define ll long long 

int main()
{
	ll n;
	cin>>n;
	vector<ll>temp(n);
	for(int i=0;i<n;i++)
	cin>>temp[i];
	ll count=0;
	for(int i=0;i<n-1;i++)
	{
		if(temp[i]>temp[i+1]){
		
		count+=(temp[i]-temp[i+1]);
		temp[i+1]=temp[i];	
	}
		
	}
	cout<<count;
	
	
	
}
