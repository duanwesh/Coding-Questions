/*
Given following three values, the task is to find the total number of maximum chocolates you can eat.

money : Money you have to buy chocolates
price : Price of a chocolate
wrap : Number of wrappers to be returned for getting one extra chocolate.
It may be assumed that all given values are positive integers and greater than 1.

platform:-
GeeksforGeeks


*/

#include<iostream>
#include<string.h>
#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll recurforans(ll t,ll p);
int32_t main()
{
	
	ll money,price,wrap,tot_ch=0,sum;
	cout<<"Enter the value of money"<<"\n";
		cin>>money;
	cout<<"Enter the value of money"<<"\n";
		cin>>price;
	cout<<"Enter the value of money"<<"\n";
        	cin>>wrap;
        	
    //intially we are calculating the number of chocolates from money and each choco's price    	
	tot_ch=sum=money/price;
	
	//we are also taking the leftover chocolate for the consideration.
	tot_ch+=(money%price);
	cout<<tot_ch;
	//recursion
	tot_ch=recurforans(tot_ch,wrap);
	//finally the total number of chocolates.
	cout<<tot_ch+sum;

	
}
ll recurforans(ll tot_ch,ll wrap)
{
	
     
     ll sum=0,k;
     
      
     if(tot_ch<wrap||tot_ch==1)
      return 0;
     k=tot_ch%wrap; 
     tot_ch=tot_ch/wrap;
     
     sum=tot_ch;
     
     tot_ch+=k;
    
	 return sum+recurforans(tot_ch,wrap);
	  




}

