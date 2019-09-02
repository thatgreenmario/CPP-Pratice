#include<iostream>
#include<string>
using namespace std;
class Name
{
	private:

		string name;
		string course;
	
	public:

		Name();
		Name(string a,string b);		
		void Accept();
		void Display();
		bool operator==(const Name a);
};
		
