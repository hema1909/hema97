#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//logic for finding fibonacci series using recursion
int fibonacci(int n)
{
	if((n==1)||(n==0))
	{
		return n;
	}
	else
	{
		return (fibonacci(n-1)+fibonacci(n-2));
	}
}
int main()
{
	int n;
	int i=0;
	cout<<"Enter n value:";
	cin>>n;
	cout<<"fibonacci series:";
	while(i<n)
	{
		cout<<"  "<<fibonacci(i);
		i++;
	}

	//logic using iteration
	int f1=0,f2=1,f3,number;
	cout<<"Enter the number of elements:";
	cin>>number;
	cout<<f1<<"  "<<f2<<"  ";//printing 0 and 1
	for(i=2;i<number;i++)//loop starts from 2 because 0 and 1 are already printed
	{
		f3=f1+f2;
		cout<<f3<<"  ";
		f1=f2;
		f2=f3;
	}
	return 0;
}

