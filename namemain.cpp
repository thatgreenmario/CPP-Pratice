#include"name.h"
#include<iostream>

using namespace std;

int main()
{
	Name *p=new Name[2];
	p[0].Accept();
	p[1].Accept();
	p[0].Display();
	p[1].Display();
	if(p[0]==p[1])
	{
		cout<<"Same";
	}else
		cout<<"Not Same"; 
		


	return 0;
}
