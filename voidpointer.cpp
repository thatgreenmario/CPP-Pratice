#include<iostream>
using namespace std;
int main()
{
	float k=65;
	void *p=&k;
	cout<<*(float *)p;
}
