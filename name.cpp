#include"name.h"
#include<iostream>

using namespace std;

Name::Name()
{
	
}

Name::Name(string a,string b)
{
	name=a;
	course=b;
	cout<<"Paramatric Constructor";
}

void Name::Accept()
{
	cout<<"Enter Name : "<<endl;
	getline(cin,name);
	cout<<"Enter Course : "<<endl;
	getline(cin,course);
}

void Name::Display()
{
	cout<<"Name : "<<name<<"  "<<"Course : "<<course<<endl;
}

bool Name::operator==(const Name a)
{
	return(this->name==a.name && this->course==a.course);
}

