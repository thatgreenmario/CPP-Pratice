#include<iostream>
using namespace std;
int main()
{
	int a[]={1,2,3,4,5};
	int *p=&a[1];
	int *q=&a[4];
	int location=q-p;
	cout<<location;

	return 0;
}
