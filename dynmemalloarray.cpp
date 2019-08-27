#include<iostream>
using namespace std;
int main()
{
	int *p=new int[4];
	for(int i=0;i<4;i++)
	{
		p[i]=i*10;
	}
	for(int j=0;j<4;j++)
	{
		cout<<p[j];
	}

	return 0;
}
