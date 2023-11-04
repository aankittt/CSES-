#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
	
	ll n;
	cin>>n;
	
	if(n==1){	
	cout<<1<<endl;
	return 0;
	}
	
	else if(n<4)
	cout<<"NO SOLUTION"<<endl;
	
	else if(n==4)
	cout<<"2 4 1 3"<< endl;
	else 
	{
		for(int i=1;i<=n;i=i+2)
		{
			cout<<i<<" ";
		}
		for(int i=2;i<=n;i=i+2)
		cout<<i<<" ";
	}
	
	
}
