#include<iostream>
using namespace std;
int main()
{
	const int k=5;
	const int *p=&k;
	p++;
	cout<<*p;

	return 0;
}

