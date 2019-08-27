#include<iostream>
using namespace std;
int main()
{
	int k=5;
	int *p=&k;
	int **l=&p;

	cout<<**l;

	return 0;
}
