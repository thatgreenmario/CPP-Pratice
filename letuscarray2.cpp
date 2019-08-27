#include<iostream>
using namespace std;
int main()
{
	int a[25];
	int flag1=0,flag2=0,even=0,odd=0;
	for(int i=0;i<25;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<25;i++)
	{
		if(a[i]>=0)
		{
			flag1++;
		}
		if(a[i]<0)
		{
			flag2++;
		}
		if(a[i]/2!=0)
		{
			even++;
		}
		if(a[i]/2!=0)
		{
			odd++;
		}
	}
	cout<<"Positive Numbers : "<<flag1<<endl;
	cout<<"Negative Numbers : "<<flag2<<endl;
	cout<<"Even Number : "<<even<<endl;
	cout<<"Odd Number : "<<odd<<endl;

	return 0;
}
