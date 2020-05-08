/*
  
    generate all possible combination of the valid parenthesis where the number of opening and closing brackets are of 2*n
    for eg:
    if n is 2
    then set of valid parenthesis are (()),()()

*/

#include<iostream>
#include<string.h>
#include<bits/stdc++.h>
#define ll long long
using namespace std;
void recurforans(string output,ll open,ll close,ll n);
int32_t main()
{
	
	ll n;
	cout<<"Enter the value of N";
	cin>>n;
	string output="";
	ll open=0, close=0;
	recurforans(output,open,close,n);
	

	
}
void recurforans(string output,ll open,ll close,ll n)
{

   // here it is the base condition that if the number of opening and closing brackets are equal to the double the n
    if((open+close)==2*n)
    {
     
        cout<<output<<"\n";
	  
    }
  // here we recur that is for the opening brackets till we reach the point to the n.
    if(open<n)	
    recurforans(output+'(',open+1,close,n);
    
    // here now we have cancel out the opening with closing so we recur for the closing one.
    if(close<open)
    recurforans(output+')',open,close+1,n);
	  
}

