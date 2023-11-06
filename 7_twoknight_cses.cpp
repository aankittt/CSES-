#include<bits/stdc++.h>
using namespace std;

#define ll long long 

int main()
{
	ll n;
	cin>>n;
	for(int i=1;i<=n;i++){
	ll k=i*i;
	ll r=k-1;
	ll tot=(k*r)/2;
	
	ll reduce=4*(i-1)*(i-2);
	
	cout<<tot-reduce<<endl;
}
}

