#include<iostream>
using namespace std;
void print(int *);
int main()
{
	int k=65;
	int *p=&k;
	print(p);
}
void print(int *t)
{
	cout<<*(char *)t;
}


