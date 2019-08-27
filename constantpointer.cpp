#include<iostream>
using namespace std;
int main()
{
	int k=100;
	  int  *const p=&k;
	  cout<<*p;
	  *p=102;
	 cout<<*p;
	return 0;
}
