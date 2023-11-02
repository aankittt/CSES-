#include<bits/stdc++.h>
using namespace std;

#define ll long long 


int main()
{
	string s;
	cin>>s;
	
	map<int,int>mp;
	int maxi=0;
	
	int i=0;int j=0;
	
	while(j<s.length())
	{
			mp[s[j]]++;
		while(mp.size()>1)
		{
			mp[s[i]]--;
			if(mp[s[i]]==0)
			mp.erase(s[i]);
			i++;
		}
	
		
		maxi=max(maxi,j-i+1);
		j++;
	}
	
	cout<<maxi<<endl;

	
	
}
