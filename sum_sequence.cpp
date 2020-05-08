/*
  
    prepbytes_sumofsequence problem

*/

#include<iostream>
#include<bits/stdc++.h>
#define ll long long
#define mod 1000007
using namespace std;
ll recurforans(ll a);
int32_t main()
{
	
	ll a;
	cout<<"Enter the value of N";
	cin>>a;
	ll b=recurforans(a);
	cout<<b;

	
}
ll recurforans(ll a)
{

    if(a==1)
    return 1;
    else if(a%2==0)
    {
     cout<<a<<"\n";	
    return(a+recurforans(a >> 1))%mod;
}
	else
	{
     cout<<a<<"\n";	
     
    return(a+recurforans(3*a+1))%mod;
}
}

