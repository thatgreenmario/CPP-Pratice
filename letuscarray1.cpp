#include<iostream>
using namespace std;
int main()
{
	int a[25];
	int n,flag=0;
	for(int i=0;i<10;i++)
	{
		cin>>a[i];
	}

	cout<<"\nEnter number to be searched"<<endl;
	cin>>n;
	for(int i=0;i<10;i++)
	{
		if(a[i]==n)
		{

			flag++;
		}
	}
	if(flag!=0)
	{
		cout<<"Number found"<<flag<< "times";
	}else
		cout<<"NUmber not found";

return 0;
}
