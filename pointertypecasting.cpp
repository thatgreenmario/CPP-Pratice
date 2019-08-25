#include<iostream>
using namespace std;
int main()
{
	int k=65;
	int *p=&k;
	cout<<*p;
	char *l=(char*)p;
	cout<<*l;

	return 0;
}
