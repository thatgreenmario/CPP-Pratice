#include<iostream>
using namespace std;
int main()
{
	const int k=5;
	int const*p=&k;
	*p=10;
	cout<<*p;

	return 0;
}

