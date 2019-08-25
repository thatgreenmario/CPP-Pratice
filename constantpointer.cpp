#include<iostream>
using namespace std;
int main()
{
	int k=10;
	int l=20; 
//	const int *p=&l;
	int *const p=&k;
	p=&l;
	*p=555550;
	cout<<*p;

	return 0;
}
