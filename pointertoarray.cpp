#include<iostream>
using namespace std;
int main()
{
	char arr[3][10]={"omkar","ajay","sangram"};
	char (*parr)[10]=&arr[0];
	cout<<*parr<<endl;

	return 0;

}

