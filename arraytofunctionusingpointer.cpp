#include<iostream>
using namespace std;
void print(int* ,int);

int main()
{
	int a[]={1,2,4,3};
	print(a,4);

	return 0;
}

void print(int *p,int q)
{
	for(int i=0;i<q;i++)
	{
		cout<<p[i];
	}
}
