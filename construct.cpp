#include "construct.h"

CopyConstructor::Line::Line(int len)				//simple constructor
{
	ptr = new int;
	
	if (ptr != new int)
	{
		*ptr = len;
	}
	
	cout << "Normal consructor allocating ptr" << endl;	
}

CopyConstructor::Line::Line(const Line& obj)		//Copy constructor
{
	cout << "Copy consructor allocating ptr" << endl;
	

}/*
CopyConstructor::Line::Line( Line& obj)		
{
	cout << "Assignment operator" << endl;


}
*/
CopyConstructor::Line::~Line()		            //Destructor
{
	delete  ptr;
	ptr = NULL;
	cout << " freeing Memory in destructor" << endl;
}
int CopyConstructor::Line::getLength()
{
	return *ptr;
}
//int CopyConstructor::Line::getLength(int)
//{
//
//	return *ptr;
//}

CopyConstructor::Line::Line()
{
	cout << "Default constructor" << endl;
}

//void CopyConstructor::display(Line obj)
//{
//	cout << "Length of line :" << obj.getLength() << endl;
//}
