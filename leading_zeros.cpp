/*

  Count trailing zeroes in factorial of a number

*/

#include<iostream>
#include<string.h>
#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll calculate(ll number);
int32_t main()
{
	ll number;
    cout<<"enter the number";
    cin>>number;
    ll count= calculate(number); 
    cout<<count;
 	
}
ll calculate(ll number)
{
	
	ll count = 0;
    ll i=5;
    while ((number/i)>=1)
	{
	  
         count += number/i; 
         i *= 5;
    }
    return count; 
	
}
