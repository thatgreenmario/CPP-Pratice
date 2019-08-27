#include<iostream>
using namespace std;
int main()
{
	int *p[3],r=3,c=2;

	for (int i=0;i<r;i++)
	{
		p[i]=new int[c];

	for(int j=0;j<r;j++)
	{
		cout<<"Enter Elements"<<endl;
		cin>>p[i][j];
	}
	}
	cout<<"Elements are ..."<<endl;
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			cout<<"\n"<<p[i][j];
		}
	}
	for(int i=0;i<r;i++)
	{
		delete []p[i];
	}

	return 0;
}

