#pragma once
#include<iostream>
#include<string>
using namespace std;
namespace CopyConstructor
{
	class Line
	{
	public:
		
		Line();
		Line(int len);				//Parameterised constructor
		Line(const Line& obj);		//Copy constructor

		/*Line(Line& obj);*/
		~Line();					//Destructor
		int getLength();
	private:
		int* ptr;
	};
	void display(Line obj);

}